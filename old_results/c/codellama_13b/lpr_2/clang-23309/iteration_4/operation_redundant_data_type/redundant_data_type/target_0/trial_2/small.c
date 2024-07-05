
int fn2(int p1, int p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned int p1, unsigned int p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }
int w;
int fn12(int, int, int, int);
int fn13() { return fn12(2L, 248UL, 3, 0x2F2F6D26L); }
int fn12(int p1, int p2, int p3, int p4) {
  for (w = 3; w; w -= 1) {
    int an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      return 1UL;
  }
  return 3L;
}
int main() {
  int value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
