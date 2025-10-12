#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int n) {
  return (n * (n + 1) * (2 * n + 1)) / 6;
}

unsigned int square_of_sum(unsigned int n) {
  unsigned int sum = (n * (n + 1)) / 2;
  return sum * sum;
}

unsigned int difference_of_squares(unsigned int n) {
  unsigned int sum_sq = sum_of_squares(n);
  unsigned int sq_sum = square_of_sum(n);
  return sq_sum - sum_sq;
}
