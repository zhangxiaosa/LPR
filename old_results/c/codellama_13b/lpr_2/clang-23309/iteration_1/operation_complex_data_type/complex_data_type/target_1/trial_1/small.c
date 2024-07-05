
typedef int c;
typedef unsigned char d;
typedef int g;

c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
g fn5(g p1, g p2) { return p2; }
g fn6(g p1, g p2) { return p1 - p2; }

short p;
short t;
c v;
short w;
g ab;
short ac = 1L;

short fn12(short p1, short p2, short p3, short p4, g p5) {
  short al = 3L;
  c am = 1L;
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  ac = 2;
  fn12(0, 0, 0, 0, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
