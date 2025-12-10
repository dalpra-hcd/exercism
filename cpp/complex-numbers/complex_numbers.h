#pragma once

namespace complex_numbers {
class Complex {
public:
  Complex(double r, double i);
  auto real() const -> double;
  auto imag() const -> double;

  auto operator+(const Complex &other) const -> Complex;
  auto operator-(const Complex &other) const -> Complex;
  auto operator*(const Complex &other) const -> Complex;
  auto operator/(const Complex &other) const -> Complex;

  auto conj() const -> Complex;
  auto abs() const -> double;
  auto exp() const -> Complex;

  auto operator+(const double &other) const -> Complex;
  auto operator-(const double &other) const -> Complex;
  auto operator*(const double &other) const -> Complex;
  auto operator/(const double &other) const -> Complex;

private:
  double real_;
  double imag_;
};

auto operator+(double lhs, const Complex &rhs) -> Complex;
auto operator-(double lhs, const Complex &rhs) -> Complex;
auto operator*(double lhs, const Complex &rhs) -> Complex;
auto operator/(double lhs, const Complex &rhs) -> Complex;

} // namespace complex_numbers
