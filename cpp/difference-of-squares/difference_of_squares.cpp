#include "difference_of_squares.h"

namespace difference_of_squares {
auto square_of_sum(int n) -> int {
  const int sum = n * (n + 1) / 2;
  return sum * sum;
}
auto sum_of_squares(int n) -> int { return n * (n + 1) * (2 * n + 1) / 6; }
auto difference(int n) -> int { return square_of_sum(n) - sum_of_squares(n); }
} // namespace difference_of_squares
