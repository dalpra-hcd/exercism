#include "reverse_string.h"

namespace reverse_string {

auto reverse_string(const std::string &input) -> std::string {
  return std::string(input.rbegin(), input.rend());
}

} // namespace reverse_string
