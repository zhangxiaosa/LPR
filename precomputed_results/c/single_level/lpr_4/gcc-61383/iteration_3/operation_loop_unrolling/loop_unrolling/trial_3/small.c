unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
short fn2(short p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab1;
    int p1_1 = o;
    if (0x4F92L < fn2(p | (ab1 = fn1(p1_1, p1_1)), 6))
      ;
    else {
      int ac1 = 0xE3L;
      if (p1_1 <= ac1)
        ;
      else if (ab1)
        break;
    }

    int ab2;
    int p1_2 = o;
    if (0x4F92L < fn2(p | (ab2 = fn1(p1_2, p1_2)), 6))
      ;
    else {
      int ac2 = 0xE3L;
      if (p1_2 <= ac2)
        ;
      else if (ab2)
        break;
    }

    int ab3;
    int p1_3 = o;
    if (0x4F92L < fn2(p | (ab3 = fn1(p1_3, p1_3)), 6))
      ;
    else {
      int ac3 = 0xE3L;
      if (p1_3 <= ac3)
        ;
      else if (ab3)
        break;
    }
  }

  return 0;
}