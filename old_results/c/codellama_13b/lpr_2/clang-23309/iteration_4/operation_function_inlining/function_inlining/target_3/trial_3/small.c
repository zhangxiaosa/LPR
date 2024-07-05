
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

short fn12(short p1, short p2, short p3, short p4) {
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
    if (fn2(0xBCD1L, fn4(fn6(1L, an), 0xECL)) & 1UL)
      return 1UL;
  }
  return 3L;
}

int main() {
  short value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
