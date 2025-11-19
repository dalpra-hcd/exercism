#pragma once
#include <boost/date_time/posix_time/posix_time.hpp>

namespace gigasecond {
using namespace boost::posix_time;
auto advance(ptime t) -> ptime;
} // namespace gigasecond
