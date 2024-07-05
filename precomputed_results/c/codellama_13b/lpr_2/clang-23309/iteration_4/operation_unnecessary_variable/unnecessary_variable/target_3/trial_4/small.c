
unsigned fn12(unsigned short p1, unsigned short p2, unsigned short p3,
                    unsigned short p4) {
  unsigned an = 250UL;
  p2 = fn5(p2, p4) || (an = 3) == 0x294A85636008822DLL;
  if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
    return 1UL;
  return 3L;
}
int main() {
  unsigned value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
