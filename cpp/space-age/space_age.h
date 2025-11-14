#pragma once

namespace space_age {

class space_age {
public:
  explicit space_age(unsigned long seconds);

  auto seconds() const -> unsigned long;

  auto on_earth() const -> double;
  auto on_mercury() const -> double;
  auto on_venus() const -> double;
  auto on_mars() const -> double;
  auto on_jupiter() const -> double;
  auto on_saturn() const -> double;
  auto on_uranus() const -> double;
  auto on_neptune() const -> double;

private:
  unsigned long seconds_;

  constexpr static double SECONDS_PER_EARTH_YEAR = 31557600.0;

  constexpr static double MERCURY_ORBITAL_RATIO = 0.2408467;
  constexpr static double VENUS_ORBITAL_RATIO = 0.61519726;
  constexpr static double MARS_ORBITAL_RATIO = 1.8808158;
  constexpr static double JUPITER_ORBITAL_RATIO = 11.862615;
  constexpr static double SATURN_ORBITAL_RATIO = 29.447498;
  constexpr static double URANUS_ORBITAL_RATIO = 84.016846;
  constexpr static double NEPTUNE_ORBITAL_RATIO = 164.79132;
};

} // namespace space_age
