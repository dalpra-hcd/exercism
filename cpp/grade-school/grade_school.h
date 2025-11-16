#pragma once
#include <map>
#include <string>
#include <vector>

namespace grade_school {

class school {
public:
  auto add(const std::string &name, int grade) -> void;
  auto grade(int grade) const -> std::vector<std::string>;
  auto roster() const -> std::map<int, std::vector<std::string>>;

private:
  std::map<int, std::vector<std::string>> students_;
};

} // namespace grade_school
