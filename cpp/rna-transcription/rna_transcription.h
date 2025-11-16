#pragma once
#include <string>

namespace rna_transcription {
auto to_rna(char nucleotide) -> char;
auto to_rna(const std::string &dna_strand) -> std::string;
} // namespace rna_transcription
