#include "nth_prime.h"
#include <stdexcept>
#include <vector>

namespace {
auto is_prime(int x, const std::vector<int> &primes) -> bool {
  for (int p : primes) {
    if (p * p > x) {
      break;
    }
    if (x % p == 0) {
      return false;
    }
  }
  return true;
}
} // namespace

namespace nth_prime {
auto nth(int n) -> int {
  if (n == 0) {
    throw std::domain_error("weird_case");
  }

  std::vector<int> primes;
  primes.reserve(n);
  primes.push_back(2);

  int candidate = 3;
  while (primes.size() < static_cast<size_t>(n)) {
    if (is_prime(candidate, primes)) {
      primes.push_back(candidate);
    }
    candidate += 2;
  }
  return primes[n - 1];
}
} // namespace nth_prime
