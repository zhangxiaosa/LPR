int m;
unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
short fn2(short p1, int p2) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
						: p1 + p2;
}
int main() {
  int ab;
  int p1;
  int ac;

  // Unrolled loop - iteration 1
  {
    p1 = o;
    if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }

  // Unrolled loop - iteration 2
  {
    p1 = fn3(fn3(n, 3), 3);
    if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }

  // Unrolled loop - iteration 3
  {
    p1 = fn3(fn3(fn3(n, 3), 3), 3);
    if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }

  // Repeat the above pattern until reaching the desired number of iterations

  return m;
}