signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }

short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
signed o;
static unsigned p = 0x01B28DB7L;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6))
      ;
    else {
      signed ac = 0xE3L;
      if (o <= ac)
        ;
      else if (fn1(o, o))
        break;
    }
  }
  return m;
}