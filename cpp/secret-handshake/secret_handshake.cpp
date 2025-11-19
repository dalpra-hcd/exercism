#include "secret_handshake.h"
#include <algorithm>

namespace secret_handshake {
auto commands(int n) -> std::vector<std::string> {
  std::vector<std::string> actions{};
  std::vector<std::string> handshake = {
      "wink",
      "double blink",
      "close your eyes",
      "jump",
  };
  size_t bit{};

  for (bit = 0; bit < handshake.size(); ++bit) {
    if (n & (1 << bit)) {
      actions.push_back(handshake[bit]);
    }
  }

  if (n & (1 << bit)) {
    std::reverse(actions.begin(), actions.end());
  }

  return actions;
}
} // namespace secret_handshake
