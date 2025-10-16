#include "isogram.h"
#include <cctype>
#include <cstddef>
#include <string_view>

namespace isogram {

bool is_isogram(std::string_view phrase) {
  unsigned int seen = 0;

  for (unsigned char ch : phrase) {
    if (!std::isalpha(ch)) {
      continue;
    }

    unsigned int bit = static_cast<unsigned int>(std::tolower(ch) - 'a');
    if (bit >= 26) {
      return false;
    }

    unsigned int mask = 1u << bit;
    if (seen & mask) {
      return false;
    }
    seen |= mask;
  }

  return true;
}

} // namespace isogram
