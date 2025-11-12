#include "power_of_troy.h"

namespace troy {
auto give_new_artifact(human &person, std::string name) -> void {
  person.possession = std::make_unique<artifact>(name);
}
auto exchange_artifacts(std::unique_ptr<artifact> &left,
                        std::unique_ptr<artifact> &right) -> void {
  std::swap(left, right);
}
auto manifest_power(human &person, std::string name) -> void {
  person.own_power = std::make_shared<power>(name);
}
auto use_power(human &caster, human &target) -> void {
  target.influenced_by = caster.own_power;
}
auto power_intensity(human &person) -> int {
  return person.own_power ? person.own_power.use_count() : 0;
}
} // namespace troy
