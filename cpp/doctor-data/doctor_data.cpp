#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int generation,
                       star_map::System current_system)
    : generation(generation), busters(0), name(name),
      current_system(current_system) {}

auto heaven::Vessel::replicate(std::string new_name) -> Vessel {
  return Vessel{new_name, generation + 1, current_system};
}

auto heaven::Vessel::make_buster() -> void { ++busters; }

auto heaven::Vessel::shoot_buster() -> bool {
  if (busters == 0) {
    return false;
  }
  --busters;
  return true;
}

auto heaven::get_older_bob(const heaven::Vessel &left,
                           const heaven::Vessel &right) -> const std::string {
  if (left.generation < right.generation) {
    return left.name;
  } else {
    return right.name;
  }
}

auto heaven::in_the_same_system(const heaven::Vessel &left,
                                const heaven::Vessel &right) -> bool {
  return left.current_system == right.current_system;
}
