#include "isogram.h"
#include <bits/localefwd.h>

namespace isogram {

bool is_isogram(const char phrase[]) {
  if (phrase == nullptr) {
    return false;
  }

  unsigned int seen = 0;

  for (const char *c = phrase; *c; ++c) {
    if (!std::isalpha(*c)) {
      continue;
    }

    unsigned int bit = std::tolower(*c) - 'a';
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
