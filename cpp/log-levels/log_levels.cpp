#include <string>

namespace log_line {
std::string message(std::string line) {
  const size_t pos = line.find(": ");
  return line.substr(pos + 2);
}

std::string log_level(std::string line) {
  const size_t start = line.find('[') + 1;
  const size_t end = line.find(']');
  return line.substr(start, end - start);
}

std::string reformat(std::string line) {
  const std::string msg = message(line);
  const std::string level = log_level(line);
  return msg + " (" + level + ")";
}
} // namespace log_line
