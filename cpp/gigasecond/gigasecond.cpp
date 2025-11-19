#include "gigasecond.h"

namespace gigasecond {
auto advance(ptime t) -> ptime { return t + seconds{1'000'000'000}; }
} // namespace gigasecond
