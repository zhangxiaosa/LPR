
unsigned short fn12() {
  for (w = 3; w; w -= 1) {
    unsigned an = 250UL;
    an = w == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), 0UL) & 1UL)
      return 1UL;
  }
  return 3L;
}

int main() {
  unsigned value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
