int m;
unsigned int o;
static unsigned int p = 0x01B28DB7L;

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) { return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }

short fn5(int p1) {
  for (; fn3(p, 3) < 12; p = fn3(p, 3)) {
    int ab;
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
  return m;
}

int main() {
  if (fn5(o))
    ;
}