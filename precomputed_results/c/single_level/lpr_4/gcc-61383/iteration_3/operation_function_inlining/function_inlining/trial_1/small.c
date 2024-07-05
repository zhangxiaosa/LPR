unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
short fn2(short p1, int p2) { return p1; }

int main() {
  for (; n < 12; n = (n && 3 && n > 2147483647 - 3 || n < 0 && 3 < 0 && n ? n : n + 3)) {
    int ab;
    int p1 = o;
    if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      int ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return 0;
}