#include "complex_numbers.h"
#include <cmath>

namespace complex_numbers {
Complex::Complex(double r, double i) : real_(r), imag_(i) {}
auto Complex::real() const -> double { return real_; }
auto Complex::imag() const -> double { return imag_; }

auto Complex::operator+(const Complex &other) const -> Complex {
  auto a = real_;
  auto b = imag_;
  auto c = other.real_;
  auto d = other.imag_;

  auto r = (a + c);
  auto i = (b + d);

  return Complex{r, i};
}
auto Complex::operator-(const Complex &other) const -> Complex {
  auto a = real_;
  auto b = imag_;
  auto c = other.real_;
  auto d = other.imag_;

  auto r = (a - c);
  auto i = (b - d);

  return Complex{r, i};
}
auto Complex::operator*(const Complex &other) const -> Complex {
  auto a = real_;
  auto b = imag_;
  auto c = other.real_;
  auto d = other.imag_;

  auto r = (a * c - b * d);
  auto i = (b * c + a * d);

  return Complex{r, i};
}
auto Complex::operator/(const Complex &other) const -> Complex {
  auto a = real_;
  auto b = imag_;
  auto c = other.real_;
  auto d = other.imag_;

  auto r = (a * c + b * d) / (c * c + d * d);
  auto i = (b * c - a * d) / (c * c + d * d);

  return Complex{r, i};
}

auto Complex::conj() const -> Complex { return Complex{real_, -1 * imag_}; }
auto Complex::abs() const -> double {
  return std::sqrt(real_ * real_ + imag_ * imag_);
}
auto Complex::exp() const -> Complex {
  auto a = real_;
  auto b = imag_;
  auto e = M_E;

  auto ea = std::pow(e, a);
  auto r = ea * std::cos(b);
  auto i = ea * std::sin(b);

  return Complex{r, i};
}

auto Complex::operator+(const double &other) const -> Complex {
  return *this + Complex{other, 0};
}
auto Complex::operator-(const double &other) const -> Complex {
  return *this - Complex{other, 0};
}
auto Complex::operator*(const double &other) const -> Complex {
  return *this * Complex{other, 0};
}
auto Complex::operator/(const double &other) const -> Complex {
  return *this / Complex{other, 0};
}

auto operator+(double lhs, const Complex &rhs) -> Complex {
  return Complex{lhs, 0} + rhs;
}
auto operator-(double lhs, const Complex &rhs) -> Complex {
  return Complex{lhs, 0} - rhs;
}
auto operator*(double lhs, const Complex &rhs) -> Complex {
  return Complex{lhs, 0} * rhs;
}
auto operator/(double lhs, const Complex &rhs) -> Complex {
  return Complex{lhs, 0} / rhs;
}
} // namespace complex_numbers
