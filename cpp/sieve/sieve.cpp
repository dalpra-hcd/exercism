#include "sieve.h"

namespace sieve {
auto primes(int limit) -> const std::vector<int> {
  std::vector<bool> marked(limit + 1, false);
  std::vector<int> primes;
  primes.reserve(limit / 2);

  for (int i = 2; i <= limit; ++i) {
    if (!marked[i]) {
      primes.push_back(i);
      for (int n = i * i; n <= limit; n += i) {
        marked[n] = true;
      }
    }
  }

  return primes;
}

} // namespace sieve
