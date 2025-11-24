#pragma once
#include <string>
#include <unordered_set>

namespace robot_name {
class robot {
public:
  robot();
  auto name() const -> std::string;
  auto reset() -> void;

private:
  static inline std::unordered_set<std::string> generated_names_;
  std::string name_;

  auto random_name() -> std::string;
  auto generate_name() -> std::string;
};
} // namespace robot_name
