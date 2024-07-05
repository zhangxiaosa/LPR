signed int l;
unsigned int m;
unsigned int n;
signed int o;
static unsigned int p = 0x01B28DB7L;
short int u;

signed int fn1(signed int p1, signed int p2) { return p2 == 0 ? p1 : p1 % p2; }

short int fn2(short int p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

int fn4(signed int p1, unsigned int p2, unsigned int p3) {
  if (fn5(o))
    ;
  return p2;
}

short int fn5(signed int) {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      signed int ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

int main() {
  short int u = 0L;
  if (fn4(u, l, u))
    ;
}