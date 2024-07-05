int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn2(short p1) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}
unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int main() {
  // Initialize variables
  n = 0;
  o = INITIAL_VALUE;

  // Loop Unrolling

  // Iteration 1
  if (n < 12) {
    int ab;
    if (0x4F92L < fn2(p | (ab = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }

  // Iteration 2
  n = fn3(n, 3);
  if (n < 12) {
    int ab;
    if (0x4F92L < fn2(p | (ab = fn1(o, o))))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }

  // Continue expanding loop iterations until all iterations have been unrolled

  return 0;
}