#pragma once
#include <string_view>

namespace pangram {

auto is_pangram(std::string_view sentence) -> bool;

} // namespace pangram
