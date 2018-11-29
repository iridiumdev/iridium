// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2017-2019, The Iridium developers
// You should have received a copy of the GNU Lesser General Public License
// If not, see <http://www.gnu.org/licenses/>.

#include "Serialization/SerializationOverloads.h"

#include <limits>

namespace CryptoNote {

void serializeBlockHeight(ISerializer& s, uint32_t& blockHeight, Common::StringView name) {
  if (s.type() == ISerializer::INPUT) {
    uint64_t height;
    s(height, name);

    if (height == std::numeric_limits<uint64_t>::max()) {
      blockHeight = std::numeric_limits<uint32_t>::max();
    } else if (height > std::numeric_limits<uint32_t>::max() && height < std::numeric_limits<uint64_t>::max()) {
      throw std::runtime_error("Deserialization error: wrong value");
    } else {
      blockHeight = static_cast<uint32_t>(height);
    }
  } else {
    s(blockHeight, name);
  }
}

void serializeGlobalOutputIndex(ISerializer& s, uint32_t& globalOutputIndex, Common::StringView name) {
  serializeBlockHeight(s, globalOutputIndex, name);
}

} //namespace CryptoNote
