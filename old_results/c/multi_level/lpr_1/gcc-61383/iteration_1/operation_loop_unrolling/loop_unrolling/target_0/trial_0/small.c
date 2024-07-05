unsigned n1;
int o;

int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

short fn6(unsigned n1) {
  int ab;

  // Unrolled loop iteration 1
  if (n1 < 12) {
    if (0x4F92L < (ab = fn1(o, o), 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      return 0;
  }

  // Unrolled loop iteration 2
  if (n1 + 3 < 12) {
    if (0x4F92L < (ab = fn1(o, o), 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      return 0;
  }

  // Unrolled loop iterations 3-12
  // Replicate the code block for n1 + 6, n1 + 9, etc.

  return 0;
}

int main() {
  fn6(n1);
}