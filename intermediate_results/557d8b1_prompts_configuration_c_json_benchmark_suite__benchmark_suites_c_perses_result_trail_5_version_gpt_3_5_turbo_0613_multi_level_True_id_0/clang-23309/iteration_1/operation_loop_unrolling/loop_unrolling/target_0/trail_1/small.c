int main() {
  int c;
  unsigned short d = 0xBCD1;
  g = 3;
  c = 250UL;

  // Iteration 1
  a || (c = g);
  if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
    f = 1UL;
  g -= 1;

  // Iteration 2
  a || (c = g);
  if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
    f = 1UL;
  g -= 1;

  // Iteration 3
  a || (c = g);
  if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
    f = 1UL;
  g -= 1;

  e = f;
  printf("checksum = %X\n", e);
  return 0;
}