#pragma once

#include <string>

namespace star_map {
enum class System {
  AlphaCentauri,
  BetaHydri,
  DeltaEridani,
  EpsilonEridani,
  Omicron2Eridani,
  Sol,
};
} // namespace star_map

namespace heaven {
class Vessel {
private:
public:
  int generation, busters;
  std::string name;
  star_map::System current_system;

  Vessel(std::string name, int generation,
         star_map::System current_system = star_map::System::Sol);

  auto replicate(std::string new_name) -> Vessel;
  auto make_buster() -> void;
  auto shoot_buster() -> bool;
};

auto get_older_bob(const heaven::Vessel &left, const heaven::Vessel &right)
    -> const std::string;
auto in_the_same_system(const heaven::Vessel &left, const heaven::Vessel &right)
    -> bool;
} // namespace heaven
