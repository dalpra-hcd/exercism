class DifferenceOfSquares {
  int squareOfSum(final int n) {
    final sum = (n * (n + 1)) ~/ 2;
    return sum * sum;
  }

  int sumOfSquares(final int n) {
    return (n * (n + 1) * (2 * n + 1)) ~/ 6;
  }

  int differenceOfSquares(final int n) {
    return squareOfSum(n) - sumOfSquares(n);
  }
}
