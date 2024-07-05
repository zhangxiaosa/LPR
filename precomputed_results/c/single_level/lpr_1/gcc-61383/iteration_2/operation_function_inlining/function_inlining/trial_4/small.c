signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
signed o;
static unsigned p = 0x01B28DB7L;
short fn5(p1) {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < (p | (ab = fn1(p1, p1))))
      ;
    else {
      signed ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return 0;
}

int main() {
  if (fn5(o))
    ;
}