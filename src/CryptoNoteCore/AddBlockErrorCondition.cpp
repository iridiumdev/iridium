// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2017-2019, The Iridium developers
// You should have received a copy of the GNU Lesser General Public License
// If not, see <http://www.gnu.org/licenses/>.

#include "AddBlockErrorCondition.h"

namespace CryptoNote {
namespace error {

AddBlockErrorConditionCategory AddBlockErrorConditionCategory::INSTANCE;


std::error_condition make_error_condition(AddBlockErrorCondition e) {
  return std::error_condition(
      static_cast<int>(e),
      AddBlockErrorConditionCategory::INSTANCE);
}

}
}
