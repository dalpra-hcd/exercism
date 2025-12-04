#include "etl.h"
#include <cctype>

namespace etl {
auto transform(std::map<int, std::vector<char>> old) -> std::map<char, int> {
  std::map<char, int> after;

  for (const auto &[point, letters] : old) {
    for (unsigned char c : letters) {
      after.emplace(std::tolower(c), point);
    }
  }

  return after;
}
} // namespace etl
