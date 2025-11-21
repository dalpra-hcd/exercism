#include "allergies.h"
#include <vector>

namespace allergies {

auto allergy_test(int n) -> person_allergy_score {
  std::unordered_set<std::string> allergies = {};
  std::vector<std::string> possible_allergies = {
      "eggs",     "peanuts",   "shellfish", "strawberries",
      "tomatoes", "chocolate", "pollen",    "cats",
  };

  for (size_t i = 0; i < possible_allergies.size(); ++i) {
    if (n & (1 << i)) {
      allergies.insert(possible_allergies[i]);
    }
  }

  return person_allergy_score(allergies);
}

person_allergy_score::person_allergy_score(
    std::unordered_set<std::string> allergies)
    : allergies_(std::move(allergies)) {}

auto person_allergy_score::is_allergic_to(const std::string &item) const
    -> bool {
  return allergies_.find(item) != allergies_.end();
}

auto person_allergy_score::get_allergies() const
    -> std::unordered_set<std::string> {
  return allergies_;
}

} // namespace allergies
