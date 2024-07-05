
short p;
short v;
short w;

short fn12(short x1, short x2, short x3, short x4, short x5) {
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    x2 = fn5(x2, x4) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), x2) & 1UL)
      v = 1UL;
  }
  return 3L;
}

int main() {
  fn12(2L, 248UL, v, 1, 0x2F2F6D26L);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
