#pragma once
#include <string>

namespace date_independent {
class clock {
public:
  static auto at(int hour, int minute) -> clock;
  auto plus(int minutes) -> clock;
  operator std::string() const;
  bool operator==(const clock &other) const;
  bool operator!=(const clock &other) const;

private:
  int hours_;
  int minutes_;

  clock(int h, int m);
  auto total_minutes() const -> int;

  static auto from_total_minutes(int total_minutes) -> clock;
  static auto div_euclid(int lhs, int rhs) -> int;
  static auto rem_euclid(int lhs, int rhs) -> int;
};
} // namespace date_independent
