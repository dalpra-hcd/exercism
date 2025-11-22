#pragma once
#include <string>
#include <vector>

namespace protein_translation {
auto proteins(std::string rna_strand) -> std::vector<std::string>;
} // namespace protein_translation
