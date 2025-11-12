#pragma once

#include <memory>
#include <string>

namespace troy {

struct artifact {
  // constructors needed (until C++20)
  artifact(std::string name) : name(name) {}
  std::string name;
};

struct power {
  // constructors needed (until C++20)
  power(std::string effect) : effect(effect) {}
  std::string effect;
};

struct human {
  std::unique_ptr<artifact> possession;
  std::shared_ptr<power> own_power;
  std::shared_ptr<power> influenced_by;
};

auto give_new_artifact(human &person, std::string name) -> void;
auto exchange_artifacts(std::unique_ptr<artifact> &left,
                        std::unique_ptr<artifact> &right) -> void;
auto manifest_power(human &person, std::string name) -> void;
auto use_power(human &caster, human &target) -> void;
auto power_intensity(human &person) -> int;

} // namespace troy
