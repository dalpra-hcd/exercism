#include "pangram.h"
#include <bitset>
#include <cctype>

namespace pangram {
auto is_pangram(std::string_view sentence) -> bool {
  std::bitset<26> seen;
  for (auto ch : sentence) {
    if (!std::isalpha(ch)) {
      continue;
    }

    int bit = std::tolower(ch) - 'a';
    if (bit < 0 || bit >= 26) {
      continue;
    }

    seen.set(bit);
  }

  return seen.all();
}
} // namespace pangram
