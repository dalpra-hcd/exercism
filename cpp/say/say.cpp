#include "say.h"
#include <map>
#include <stdexcept>
#include <vector>

namespace {
auto ones_to_word(long n) -> std::string {
  const std::map<long, std::string> ones_map = {
      {1, "one"}, {2, "two"},   {3, "three"}, {4, "four"}, {5, "five"},
      {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};
  return ones_map.at(n);
}

auto nteens_to_word(long n) -> std::string {
  if (n < 10) {
    return ones_to_word(n);
  }

  const std::map<long, std::string> teens_map = {
      {10, "ten"},      {11, "eleven"},  {12, "twelve"},  {13, "thirteen"},
      {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"},
      {18, "eighteen"}, {19, "nineteen"}};
  return teens_map.at(n);
}

auto tens_to_word(long n) -> std::string {
  if (n < 20) {
    return nteens_to_word(n);
  }

  const std::map<long, std::string> tens_map = {
      {2, "twenty"}, {3, "thirty"},  {4, "forty"},  {5, "fifty"},
      {6, "sixty"},  {7, "seventy"}, {8, "eighty"}, {9, "ninety"}};
  std::string output = "";
  long tens = n / 10;
  long ones = n % 10;

  output = tens_map.at(tens);
  if (ones > 0) {
    output += "-" + ones_to_word(ones);
  }
  return output;
}

auto hundreds_to_word(long n) -> std::string {
  if (n < 100) {
    return tens_to_word(n);
  }

  std::string output = "";
  long hundreds = n / 100;
  long remainder = n % 100;

  output = ones_to_word(hundreds) + " hundred";
  if (remainder > 0) {
    output += " " + tens_to_word(remainder);
  }
  return output;
}

auto large_number_to_word(long n) -> std::string {
  std::vector<std::pair<long, std::string>> suffixes = {
      {1'000'000'000, "billion"},
      {1'000'000, "million"},
      {1'000, "thousand"},
      {1, ""}};

  std::string output;
  for (const auto &[large, suffix] : suffixes) {
    if (n >= large) {
      long chunk = n / large;
      n %= large;
      std::string chunk_word = hundreds_to_word(chunk);

      if (!output.empty()) {
        output += " ";
      }
      output += chunk_word;

      if (!suffix.empty()) {
        output += " " + suffix;
      }
    }
  }
  return output;
}
} // namespace

namespace say {
auto in_english(long number) -> std::string {
  if (number < 0 || number > 999'999'999'999) {
    throw std::domain_error("Number out of range");
  }
  if (number == 0) {
    return "zero";
  }
  return large_number_to_word(number);
}
} // namespace say
