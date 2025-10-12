#include <stdexcept>
#include <string>

namespace log_line {
std::string message(std::string line) {
  auto pos = line.find(':');
  return line.substr(pos + 2);
}

std::string log_level(std::string line) {
  auto left = line.find('[');
  auto right = line.find(']');
  return line.substr(left + 1, right - left - 1);
}

std::string reformat(std::string line) {
  auto level = log_level(line);
  auto msg = message(line);
  return msg + " (" + level + ")";
}
} // namespace log_line
