#include "sum_of_multiples.h"
#include <numeric>
#include <unordered_set>

namespace sum_of_multiples {
auto to(std::vector<int> magical_items, int level) -> int {

  std::unordered_set<int> uniq_multiples{};
  for (auto base : magical_items) {
    if (base == 0) {
      continue;
    }

    for (int item = base; item < level; item += base) {
      uniq_multiples.insert(item);
    }
  }

  return std::accumulate(uniq_multiples.begin(), uniq_multiples.end(), 0);
}
} // namespace sum_of_multiples
