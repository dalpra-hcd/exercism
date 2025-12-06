#include "luhn.h"
#include <cctype>
#include <string>

namespace luhn {
auto valid(std::string input) -> bool {
  auto sum = 0;
  auto digits = 0;
  auto double_next = false;

  for (auto it = input.crbegin(); it != input.crend(); ++it) {
    const auto ch = static_cast<unsigned char>(*it);

    if (std::isspace(ch)) {
      continue;
    }

    if (!std::isdigit(ch)) {
      return false;
    }

    auto n = ch - '0';
    if (double_next) {
      n *= 2;
      if (n > 9) {
        n -= 9;
      }
    }
    sum += n;
    digits += 1;
    double_next = !double_next;
  }

  return digits > 1 && sum % 10 == 0;
}
} // namespace luhn
