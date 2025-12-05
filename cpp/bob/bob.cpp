#include "bob.h"
#include <cctype>

namespace {
auto is_all_uppercase(std::string input) -> bool {
  auto at_least_one_letter = false;

  for (auto &ch : input) {
    if (!std::isalpha(ch)) {
      continue;
    }

    if (!std::isupper(ch)) {
      return false;
    } else {
      at_least_one_letter = true;
    }
  }

  return at_least_one_letter;
}

auto ends_with_question(std::string input) -> bool {
  auto last_not_whitespace = ' ';

  for (auto &ch : input) {
    if (!std::isspace(ch)) {
      last_not_whitespace = ch;
    }
  }

  return last_not_whitespace == '?';
}

auto is_empty_or_whitespace(std::string input) -> bool {
  if (input.empty()) {
    return true;
  }

  for (auto &ch : input) {
    if (!std::isspace(ch)) {
      return false;
    }
  }

  return true;
}
} // namespace

namespace bob {
auto hey(std::string input) -> std::string {
  if (is_empty_or_whitespace(input)) {
    return "Fine. Be that way!";
  }

  auto is_yelling = is_all_uppercase(input);
  auto is_question = ends_with_question(input);

  if (is_yelling && is_question) {
    return "Calm down, I know what I'm doing!";
  }

  if (is_yelling) {
    return "Whoa, chill out!";
  }

  if (is_question) {
    return "Sure.";
  }

  return "Whatever.";
}
} // namespace bob
