#include "sieve.h"

namespace sieve {
auto primes(int n) -> const std::vector<int> {
  if (n < 2) {
    return {};
  }

  std::vector<bool> marked(n + 1, false);

  for (int i = 2; i * i <= n; ++i) {
    if (!marked[i]) {
      for (int multiple = i * i; multiple <= n; multiple += i) {
        marked[multiple] = true;
      }
    }
  }

  std::vector<int> primes;
  primes.reserve(n / 2);

  for (int i = 2; i <= n; ++i) {
    if (!marked[i])
      primes.push_back(i);
  }

  return primes;
}

} // namespace sieve
