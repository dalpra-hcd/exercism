#include "hamming.h"
#include <stdexcept>

namespace hamming {
auto compute(const std::string &left, const std::string &right) -> int {
  if (left.size() != right.size()) {
    throw std::domain_error("strands must be of equal length");
  }

  int distance = 0;
  for (std::size_t i = 0; i < left.size(); ++i) {
    if (left[i] != right[i]) {
      ++distance;
    }
  }
  return distance;
}
} // namespace hamming
