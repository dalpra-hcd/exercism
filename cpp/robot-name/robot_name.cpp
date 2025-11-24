#include "robot_name.h"
#include <random>

namespace robot_name {

robot::robot() { name_ = generate_name(); }

auto robot::name() const -> std::string { return name_; }

auto robot::reset() -> void { name_ = generate_name(); }

auto robot::random_name() -> std::string {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> letter('A', 'Z');
  std::uniform_int_distribution<int> digit('0', '9');

  std::string name;
  name.reserve(5);
  name.push_back(static_cast<char>(letter(gen)));
  name.push_back(static_cast<char>(letter(gen)));
  name.push_back(static_cast<char>(digit(gen)));
  name.push_back(static_cast<char>(digit(gen)));
  name.push_back(static_cast<char>(digit(gen)));
  return name;
}

auto robot::generate_name() -> std::string {
  for (;;) {
    auto candidate = random_name();
    if (generated_names_.insert(candidate).second) {
      return candidate;
    }
  }
}
} // namespace robot_name
