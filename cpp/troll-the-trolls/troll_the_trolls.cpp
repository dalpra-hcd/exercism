namespace hellmath {

enum class AccountStatus { troll, guest, user, mod };

enum class Action { read, write, remove };

bool display_post(AccountStatus poster, AccountStatus viewer) {
  switch (poster) {
  case AccountStatus::troll:
    return viewer == AccountStatus::troll;
  default:
    return true;
  }
}

bool permission_check(Action action, AccountStatus status) {
  switch (status) {
  case AccountStatus::troll:
  case AccountStatus::user:
    return action == Action::read || action == Action::write;
  case AccountStatus::guest:
    return action == Action::read;
  case AccountStatus::mod:
    return true;
  default:
    return false;
  }
}

bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
  switch (player1) {
  case AccountStatus::guest:
    return false;
  case AccountStatus::troll:
    return player2 == AccountStatus::troll;
  default:
    return player2 != AccountStatus::guest && player2 != AccountStatus::troll;
  }
}

bool has_priority(AccountStatus first, AccountStatus second) {
  switch (first) {
  case AccountStatus::mod:
    return second != AccountStatus::mod;
  case AccountStatus::user:
    return second != AccountStatus::mod && second != AccountStatus::user;
  case AccountStatus::guest:
    return second == AccountStatus::troll;
  case AccountStatus::troll:
    return false;
  default:
    return false;
  }
}

} // namespace hellmath
