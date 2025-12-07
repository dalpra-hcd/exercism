#include "armstrong_numbers.h"
#include <cmath>
#include <string>

namespace armstrong_numbers {
auto is_armstrong_number(int number) -> bool {
  auto nstr = std::to_string(number);
  auto pwr = nstr.length();
  auto sum = 0;

  for (auto &ch : nstr) {
    auto n = ch - '0';
    sum += std::pow(n, pwr);
  }

  return sum == number;
}
} // namespace armstrong_numbers
