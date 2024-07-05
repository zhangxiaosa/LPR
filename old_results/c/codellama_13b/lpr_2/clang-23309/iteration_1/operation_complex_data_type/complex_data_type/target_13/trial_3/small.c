
// Decomposed program with primary data types

// typedef int c;
int c;

// typedef unsigned char d;
unsigned char d;

// typedef int g;
int g;

// g fn2(g p1, g p2) { return p1 - p2; }
int fn2(int p1, int p2) { return p1 - p2; }

// c fn3(c p1, c p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }

// d fn4(d p1, d p2) { return p1; }
unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

// g fn5(g p1, g p2) { return p2; }
int fn5(int p1, int p2) { return p2; }

// g fn6(g p1, g p2) { return p1 - p2; }
int fn6(int p1, int p2) { return p1 - p2; }

// short p;
short p;

// short t;
short t;

// c v;
int v;

// short w;
short w;

// g ab;
int ab;

// short ac = 1L;
short ac = 1L;

// short fn10(g, short);
short fn10(int, short);

// short fn12(short, short, short, short, g);
short fn12(short, short, short, short, int);

// short fn13() {
int fn13() {
  // short ae = 1UL;
  short ae = 1UL;
  fn10(v, t);
  return ae;
}

// short fn10(g p1, short p2) {
short fn10(int p1, short p2) {
  // short af = 0x2F2F6D26L;
  short af = 0x2F2F6D26L;
  // short ag = 248UL;
  short ag = 248UL;
  fn12(2L, ag, p2, 1, p1);
  return af;
}

// short fn12(short p1, short p2, short p3, short p4, g p5) {
short fn12(short p1, short p2, short p3, short p4, int p5) {
  // short al = 3L;
  short al = 3L;
  // c am = 1L;
  int am = 1L;
  // short an;
  short an;
  // for (an = 3; an; an -= 1)
  for (an = 3; an; an -= 1)
    // if (fn2(fn3(0xBCD1L, fn4(fn6(am, an), 0xECL)), p5) & 1UL)
    if (fn2(fn3(0xBCD1L, fn4(fn6(am, an), 0xECL)), p5) & 1UL)
      v = 1UL;
  return al;
}

// int main() {
int main() {
  // fn13();
  fn13();
  // p = v;
  p = v;
  // printf("checksum = %X\n", p);
  printf("checksum = %X\n", p);
  // return 0;
  return 0;
}
