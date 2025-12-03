#pragma once
#include <string>

namespace atbash_cipher {
auto encode(std::string input) -> std::string;
auto decode(std::string input) -> std::string;
} // namespace atbash_cipher
