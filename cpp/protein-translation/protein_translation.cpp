#include "protein_translation.h"
#include <unordered_map>

namespace protein_translation {
auto proteins(std::string rna_strand) -> std::vector<std::string> {
  const std::unordered_map<std::string, std::string> rna_translation_table{
      {"AUG", "Methionine"},
      {"UUU", "Phenylalanine"},
      {"UUC", "Phenylalanine"},
      {"UUA", "Leucine"},
      {"UUG", "Leucine"},
      {"UCU", "Serine"},
      {"UCC", "Serine"},
      {"UCA", "Serine"},
      {"UCG", "Serine"},
      {"UAU", "Tyrosine"},
      {"UAC", "Tyrosine"},
      {"UGU", "Cysteine"},
      {"UGC", "Cysteine"},
      {"UGG", "Tryptophan"},
      {"UAA", ""},
      {"UAG", ""},
      {"UGA", ""},
  };
  std::vector<std::string> amino_acids;
  amino_acids.reserve(rna_strand.size());

  for (std::size_t i = 0; i < rna_strand.size(); i += 3) {
    std::string codon = rna_strand.substr(i, 3);
    auto it = rna_translation_table.find(codon);
    if (it->second.empty()) {
      break;
    }
    amino_acids.push_back(it->second);
  }

  return amino_acids;
}
} // namespace protein_translation
