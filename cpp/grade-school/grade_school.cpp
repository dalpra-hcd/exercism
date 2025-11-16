#include "grade_school.h"
#include <algorithm>

namespace grade_school {
auto school::add(const std::string &name, int grade) -> void {
  students_[grade].push_back(name);
  std::sort(students_[grade].begin(), students_[grade].end());
}
auto school::grade(int grade) const -> std::vector<std::string> {
  if (students_.find(grade) == students_.end()) {
    return {};
  }

  return students_.at(grade);
}
auto school::roster() const -> std::map<int, std::vector<std::string>> {
  return students_;
}
} // namespace grade_school
