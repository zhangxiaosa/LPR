
#include <stdio.h>

// Decomposition of complex data types into primary data types
short p;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;
unsigned char fn10(short, short);
unsigned char fn11(unsigned char, short, short, short);

// Function for calculating the checksum of a short value
void fn1(short p1, int p2) {
  printf("checksum = %X\n", p1);
}

// Function for subtracting two short values
short fn2(short p1, short p2) {
  return p1 - p2;
}

// Function for subtracting two short values
short fn3(short p1, short p2) {
  return p1 - p2;
}

// Function for returning a short value
short fn5(short p1, short p2) {
  return p2;
}

// Function for subtracting two short values
short fn6(short p1, short p2) {
  return p1 - p2;
}

// Function for assigning a short value to a variable
void fn9(short p1, char *p2) {
  p = p1;
}

// Function for calculating the checksum of a short value
short fn13() {
  short ae = 1;
  fn10(u, t);
  return ae;
}

// Function for calculating the checksum of a short value
unsigned char fn10(short p1, short p2) {
  short af = 0x2F2F6D26;
  unsigned char ag = 248;
  fn11(2, ag, p2, 1);
  return af;
}

// Function for calculating the checksum of a short value
unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
  short ai = 7;
  short aj = 1;
  short al = 3;
  short am = 1;
  short an;
  for (w = 3; w; w--) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  fn9(v, "g_170");
  fn1(p, 0);
  return 0;
}
