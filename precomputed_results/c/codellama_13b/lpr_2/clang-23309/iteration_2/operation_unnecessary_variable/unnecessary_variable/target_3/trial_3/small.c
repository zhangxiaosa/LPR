
short an = 250UL;

short fn10(short p1, short p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}

short fn12(short p1, short p2, short p3, short p4, short p5) {
  for (w = 3; w; w -= 1) {
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return 3L;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
