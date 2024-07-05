
int main() {
  unsigned value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}

unsigned short fn12(unsigned short p1, unsigned short p2, unsigned short p3,
                    unsigned short p4) {
  for (unsigned w = 3; w; w -= 1) {
    unsigned an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      return 1UL;
  }
  return 3L;
}

unsigned fn13() {
  return fn12(2L, 248UL, 3, 0x2F2F6D26L);
}

