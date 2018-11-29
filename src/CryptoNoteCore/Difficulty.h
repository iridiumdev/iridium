// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2017-2019, The Iridium developers
// You should have received a copy of the GNU Lesser General Public License
// If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdint>
#include <vector>

#include "crypto/hash.h"

namespace CryptoNote {

typedef std::uint64_t Difficulty;
bool check_hash(const Crypto::Hash &hash, Difficulty difficulty);

}
