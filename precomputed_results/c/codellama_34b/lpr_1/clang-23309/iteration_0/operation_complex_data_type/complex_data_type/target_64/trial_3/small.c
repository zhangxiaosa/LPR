
typedef unsigned char u_char;

void fn1(short p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 - p2; }

short fn5(short p1, short p2) { return p2; }

short fn6(short p1, short p2) { return p1 - p2; }

short p;

int main() {
  int ap = 0;
  short ae = 1UL;
  short af = 0x2F2F6D26L;
  u_char ag = 248UL;
  short ai = 7L;
  short aj = 1UL;
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 1; w <= 3; w++) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1UL;
  }
  return ae;
}
