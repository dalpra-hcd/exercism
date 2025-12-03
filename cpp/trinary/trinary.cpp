#include "trinary.h"
#include <cmath>
#include <string>

namespace trinary {
auto to_decimal(std::string input) -> int {
  int dec = 0;
  int pwr = 0;

  for (auto it = input.rbegin(); it != input.rend(); ++it, ++pwr) {
    int n = *it - '0';
    if (n < 0 || n > 3) {
      return 0;
    }

    dec += n * std::pow(3, pwr);
  }

  return dec;
}
} // namespace trinary
