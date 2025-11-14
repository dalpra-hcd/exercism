#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

auto steps(int n) -> int {
  if (n <= 0) {
    throw std::domain_error("Input must be a positive integer!");
  }

  int cnt = 0;
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
    ++cnt;
  }
  return cnt;
}

} // namespace collatz_conjecture
