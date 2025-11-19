#pragma once
#include <utility>

namespace queen_attack {
using position = std::pair<int, int>;

class chess_board {
public:
  chess_board(position white, position black);

  auto white() const -> const position;
  auto black() const -> const position;

  auto can_attack() const -> bool;

private:
  position white_;
  position black_;

  static constexpr auto valid(position pos) -> bool;
};
} // namespace queen_attack
