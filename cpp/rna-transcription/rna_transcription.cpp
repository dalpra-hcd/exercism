#include "rna_transcription.h"
#include <stdexcept>

namespace rna_transcription {
auto to_rna(char nucleotide) -> char {
  switch (nucleotide) {
  case 'C':
    return 'G';
  case 'G':
    return 'C';
  case 'A':
    return 'U';
  case 'T':
    return 'A';
  default:
    throw std::invalid_argument("Invalid nucleotide");
  }
}
auto to_rna(const std::string &dna_strand) -> std::string {
  std::string rna_strand;
  rna_strand.reserve(dna_strand.size());
  for (char nucleotide : dna_strand) {
    rna_strand.push_back(to_rna(nucleotide));
  }
  return rna_strand;
}
} // namespace rna_transcription
