#include "grains.h"

namespace grains {

auto square(int n) -> unsigned long long { return 1ULL << (n - 1); }

auto total() -> unsigned long long { return __UINT64_MAX__; }

} // namespace grains
