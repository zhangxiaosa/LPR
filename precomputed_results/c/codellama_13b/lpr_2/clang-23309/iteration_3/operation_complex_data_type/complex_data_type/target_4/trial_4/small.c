
short fn2(short p1, short p2) { return p1 - p2; }

short fn3(short p1, short p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

char fn5(char p1, char p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

char p;
char v;
short w;

char fn12(char, char, char, char, char);

char fn13() {
  fn12(2L, 248UL, v, 1, 0x2F2F6D26L);
  return 0;
}

char fn12(char p1, char p2, char p3, char p4, char p5) {
  for (w = 3; w; w -= 1) {
    char an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
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
