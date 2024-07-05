
long fn3_fast(long p1, long p2) {
  long result = 0;
  long borrow = 0;

  while (p2 != 0) {
    result -= p1;
    borrow = p2;
    p2 = p1;
    p1 = borrow;
  }

  return result;
}
