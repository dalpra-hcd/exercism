#include "triangle.h"
#include <stdexcept>

namespace triangle {
auto kind(double a, double b, double c) -> flavor {
  if (a <= 0 || b <= 0 || c <= 0) {
    throw std::domain_error("triangles_with_negative_sides_are_illegal");
  }

  if (a + b <= c || a + c <= b || b + c <= a) {
    throw std::domain_error("triangle_inequality_violation");
  }

  if (a == b && b == c) {
    return flavor::equilateral;
  } else if (a == b || b == c || a == c) {
    return flavor::isosceles;
  } else {
    return flavor::scalene;
  }
}
} // namespace triangle
