#include "prime_factors.h"

namespace prime_factors {
auto of(long long n) -> const std::vector<long long> {
  std::vector<long long> factors;

  for (long long p = 2; p * p <= n; ++p) {
    while (n % p == 0) {
      factors.push_back(p);
      n /= p;
    }
  }

  if (n > 1) {
    factors.push_back(n);
  }

  return factors;
}
} // namespace prime_factors
