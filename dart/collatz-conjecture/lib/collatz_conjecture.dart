class CollatzConjecture {
  int steps(final int number) {
    if (number < 1) {
      throw ArgumentError('Only positive integers are allowed');
    }

    int cnt = 0;
    int n = number;

    while (n != 1) {
      if (n.isEven) {
        n ~/= 2;
      } else {
        n = 3 * n + 1;
      }
      cnt++;
    }

    return cnt;
  }
}
