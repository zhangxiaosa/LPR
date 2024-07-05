c
int main() {
  short ab = 10;
  short ac = 1L;
  short v = 0;
  short w = 0;
  short an = 1L;
  short ao = 0xBCD1L;
  short p2;

  p2 = fn5(ab, ac) || (an = 3) == 0x294A85636008822DLL;

  if (fn2(fn3(ao, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
    v = 1UL;

  printf("checksum = %X\n", v);

  return 0;
}
