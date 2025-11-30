#include "beer_song.h"
#include <sstream>
#include <string>

namespace beer_song {

namespace {
auto bottle_count(int n) -> std::string {
  if (0 == n) {
    return "no more bottles";
  } else if (1 == n) {
    return "1 bottle";
  } else {
    return std::to_string(n) + " bottles";
  }
}
} // namespace

auto verse(int n) -> std::string {
  std::ostringstream oss;

  if (0 == n) {
    oss << "No more bottles of beer on the wall, no more bottles of beer.\n"
        << "Go to the store and buy some more, 99 bottles of beer on the "
           "wall.\n";
  } else if (1 == n) {
    oss << "1 bottle of beer on the wall, 1 bottle of beer.\n"
        << "Take it down and pass it around, no more bottles of beer on the "
           "wall.\n";
  } else {
    oss << bottle_count(n) << " of beer on the wall, " << bottle_count(n)
        << " of beer.\n"
        << "Take one down and pass it around, " << bottle_count(n - 1)
        << " of beer on the wall.\n";
  }

  return oss.str();
}

auto sing(int start, int end) -> std::string {
  std::ostringstream oss;

  for (int i = start; i >= end; --i) {
    oss << verse(i);
    if (i > end) {
      oss << "\n";
    }
  }

  return oss.str();
}
} // namespace beer_song
