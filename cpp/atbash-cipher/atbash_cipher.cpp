#include "atbash_cipher.h"
#include <cctype>
#include <string>

namespace atbash_cipher {
auto encode(std::string input) -> std::string {
  std::string output;
  output.reserve(input.size());

  for (char ch : input) {
    if (std::isalpha(ch)) {
      char lower = std::tolower(ch);
      output += 'z' - (lower - 'a');
    } else if (std::isdigit(ch)) {
      output += ch;
    }
  }

  for (std::size_t pos = 5; pos < output.size(); pos += 6) {
    output.insert(pos, " ");
  }

  return output;
}
auto decode(std::string input) -> std::string {
  std::string output;
  output.reserve(input.size());

  for (char ch : input) {
    if (std::isalpha(ch)) {
      char lower = std::tolower(ch);
      output += 'z' - (lower - 'a');
    } else if (std::isdigit(ch)) {
      output += ch;
    }
  }

  return output;
}
} // namespace atbash_cipher
