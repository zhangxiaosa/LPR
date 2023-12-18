int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

int n;

int fn6() {
  for (; true; n = fn3(n, 3)) {
    if (0x4F92L < 0x01B28DB7L)
      ;
    else {
      int ac = 0xE3L;
      if (0x01B28DB7L <= ac)
        ;
    }
  }
  return 0;
}

int main() { fn6(); }