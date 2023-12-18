int fn2(int p1, int p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

int main() {
  int n = 0;
  int o;
  static int p = 0x01B28DB7L;

  for (; n < 12; n = fn3(n, 3)) {
    int ab = 0;
    if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      return 0;
  }
  return 0;
}