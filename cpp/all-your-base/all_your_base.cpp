#include "all_your_base.h"
#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace all_your_base {
auto convert(unsigned int base, std::vector<unsigned int> digits,
             unsigned int another) -> std::vector<unsigned int> {

  if (base < 2 || another < 2) {
    throw std::invalid_argument{"base_is_invalid"};
  }

  auto n = 0;
  auto len = digits.size() - 1;

  for (auto d : digits) {
    if (d >= base) {
      throw std::invalid_argument{"invalid_positive_digit"};
    }

    n += d * std::pow(base, len);
    --len;
  }

  std::vector<unsigned int> out_digits;
  while (n > 0) {
    int rem = n % another;
    out_digits.push_back(rem);
    n /= another;
  }

  std::reverse(out_digits.begin(), out_digits.end());
  return out_digits;
}
} // namespace all_your_base
