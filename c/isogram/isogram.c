#include "isogram.h"
#include <ctype.h>
#include <stdbool.h>

bool is_isogram(const char phrase[]) {
  if (!phrase) {
    return false;
  }

  unsigned int seen = 0;

  for (const char *c = phrase; *c != '\0'; ++c) {
    if (!isalpha(*c)) {
      continue;
    }

    unsigned char bit = tolower(*c) - 'a';
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
