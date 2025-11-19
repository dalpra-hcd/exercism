#include "queen_attack.h"
#include <cmath>
#include <stdexcept>

namespace queen_attack {
chess_board::chess_board(position white, position black)
    : white_(white), black_(black) {
  if (!valid(white_)) {
    throw std::domain_error{"newly_placed_queen_must_have_valid_position"};
  }

  if (white_ == black_) {
    throw std::domain_error{"queen_positions_must_be_distinct"};
  }
}

auto chess_board::white() const -> const position { return white_; }
auto chess_board::black() const -> const position { return black_; }

auto chess_board::can_attack() const -> bool {
  auto [wr, wc] = white_;
  auto [br, bc] = black_;

  auto same_row = wr == br;
  auto same_col = wc == bc;
  auto same_diag = std::abs(wr - br) == std::abs(wc - bc);

  return same_row || same_col || same_diag;
}

constexpr auto chess_board::valid(position pos) -> bool {
  return (pos.first > 0 && pos.first < 8) && (pos.second > 0 && pos.second < 8);
}
} // namespace queen_attack
