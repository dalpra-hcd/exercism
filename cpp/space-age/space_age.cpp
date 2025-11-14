#include "space_age.h"

namespace space_age {

space_age::space_age(unsigned long seconds) : seconds_(seconds) {}

auto space_age::seconds() const -> unsigned long { return seconds_; }

auto space_age::on_earth() const -> double {
  return seconds_ / SECONDS_PER_EARTH_YEAR;
}

auto space_age::on_mercury() const -> double {
  return on_earth() / MERCURY_ORBITAL_RATIO;
}

auto space_age::on_venus() const -> double {
  return on_earth() / VENUS_ORBITAL_RATIO;
}

auto space_age::on_mars() const -> double {
  return on_earth() / MARS_ORBITAL_RATIO;
}

auto space_age::on_jupiter() const -> double {
  return on_earth() / JUPITER_ORBITAL_RATIO;
}

auto space_age::on_saturn() const -> double {
  return on_earth() / SATURN_ORBITAL_RATIO;
}

auto space_age::on_uranus() const -> double {
  return on_earth() / URANUS_ORBITAL_RATIO;
}

auto space_age::on_neptune() const -> double {
  return on_earth() / NEPTUNE_ORBITAL_RATIO;
}

} // namespace space_age
