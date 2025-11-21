#pragma once
#include <string>
#include <unordered_set>

namespace allergies {

class person_allergy_score {
public:
  person_allergy_score(std::unordered_set<std::string> allergies);
  auto is_allergic_to(const std::string &item) const -> bool;
  auto get_allergies() const -> std::unordered_set<std::string>;

private:
  std::unordered_set<std::string> allergies_;
};

auto allergy_test(int n) -> person_allergy_score;

} // namespace allergies
