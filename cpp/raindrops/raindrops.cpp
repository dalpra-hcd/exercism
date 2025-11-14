#include "raindrops.h"

namespace raindrops {

auto convert(int number) -> std::string {
  std::string result;

  if (number % 3 == 0) {
    result += "Pling";
  }
  if (number % 5 == 0) {
    result += "Plang";
  }
  if (number % 7 == 0) {
    result += "Plong";
  }
  if (result.empty()) {
    result = std::to_string(number);
  }

  return result;
}
} // namespace raindrops
