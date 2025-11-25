#include "clock.h"
#include <cstdio>

namespace date_independent {

auto clock::at(int hour, int minute) -> clock {
  return clock::from_total_minutes(hour * 60 + minute);
}

auto clock::plus(int minutes) -> clock {
  return from_total_minutes(total_minutes() + minutes);
}

clock::operator std::string() const {
  char buffer[6]; // "HH:MM" + null terminator
  std::snprintf(buffer, sizeof(buffer), "%02d:%02d", hours_, minutes_);
  return std::string(buffer);
}

bool clock::operator==(const clock &other) const {
  return hours_ == other.hours_ && minutes_ == other.minutes_;
}

bool clock::operator!=(const clock &other) const { return !(*this == other); }

clock::clock(int h, int m) : hours_(h), minutes_(m) {}

auto clock::total_minutes() const -> int { return (60 * hours_) + minutes_; }

auto clock::from_total_minutes(int total_minutes) -> clock {
  int minutes = rem_euclid(total_minutes, 60);
  int hours = rem_euclid(div_euclid(total_minutes, 60), 24);
  return clock(hours, minutes);
}

auto clock::div_euclid(int lhs, int rhs) -> int {
  int q = lhs / rhs;
  int r = lhs % rhs;
  if (r < 0) {
    --q;
  }
  return q;
}

auto clock::rem_euclid(int lhs, int rhs) -> int {
  int r = lhs % rhs;
  return r < 0 ? r + rhs : r;
}
} // namespace date_independent
