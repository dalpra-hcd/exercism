#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {
auto count(std::string strand) -> std::map<char, int> {
  std::map<char, int> nucleotide_map{
      {'A', 0},
      {'C', 0},
      {'G', 0},
      {'T', 0},
  };

  for (const char nucleotide : strand) {
    if (nucleotide_map.find(nucleotide) == nucleotide_map.end()) {
      throw std::invalid_argument("strand_with_invalid_nucleotides");
    }
    ++nucleotide_map[nucleotide];
  }

  return nucleotide_map;
}
} // namespace nucleotide_count
