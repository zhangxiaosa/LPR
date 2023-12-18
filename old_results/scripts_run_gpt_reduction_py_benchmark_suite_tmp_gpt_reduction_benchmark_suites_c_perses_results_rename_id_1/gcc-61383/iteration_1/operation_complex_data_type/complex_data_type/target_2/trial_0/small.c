int fn3(int p1, int p2) {
  if (p1 != 0 && p2 != 0 && p1 > 2147483647 - p2)
    return p1;
  else if (p1 < 0 && p2 < 0 && p1 != 0)
    return p1;
  else
    return p1 + p2;
}

int main() {
  unsigned m;
  unsigned n;
  int o;

  short fn5(int p1) {
    unsigned n = 0;
    unsigned m = 0;
    for (; n < 12; n = fn3(n, 3)) {
      int ab;
      if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6)) {
        // Do something
      } else if (p1 <= 0xE3L) {
        // Do something
      } else if (ab) {
        break;
      }
    }
    return m;
  }

  if (fn5(o)) {
    // Do something
  }
}