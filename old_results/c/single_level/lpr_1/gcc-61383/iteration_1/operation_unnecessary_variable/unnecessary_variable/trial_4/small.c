signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }

short fn2(short p1) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
  : p1 + p2;
}

unsigned m;
unsigned n;
signed o;

short fn5() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < fn2(p | (ab = fn1(p, p)), 6))
      ;
    else {
      signed ac = 0xE3L;
      if (p <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

int main() {
  if (fn5())
    ;
}