typedef int b;
typedef long c;
typedef unsigned d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

f fn6(unsigned p1, unsigned p2) { return p1 - p2; }

f p;
b t;
f u;
c v;
short w;

d fn10(g, short);
b fn13() {
  fn10(u, t);
  return 0;
}

d fn10(g p1, short p2) {
  b al = 3L;
  c am = 1L;
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = (w == 0x294A85636008822L);
      short ao = 0xBCD1L;
      if ((ao - (fn6(am, an) - 0xECL)) - p2 & 1UL)
        v = 1UL;
    }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}