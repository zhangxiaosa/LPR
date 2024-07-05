int m;
unsigned int n;
int o;
static unsigned int p = 297857911;

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    int p1 = o;
    if (20210 < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      int ac = 227;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}
