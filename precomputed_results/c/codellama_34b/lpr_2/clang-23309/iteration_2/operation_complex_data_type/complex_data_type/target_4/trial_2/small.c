
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int p;
int t;
int v;
short w;
unsigned ac = 1;

int fn13() {
  short al = 3;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
      v = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}

int t_decomposed;

void decompose_t() {
  t_decomposed = 0;
  if (t & 0x80000000) {
    t_decomposed = 1;
  }
  if (t & 0x40000000) {
    t_decomposed = 2;
  }
  if (t & 0x20000000) {
    t_decomposed = 3;
  }
  if (t & 0x10000000) {
    t_decomposed = 4;
  }
  if (t & 0x08000000) {
    t_decomposed = 5;
  }
  if (t & 0x04000000) {
    t_decomposed = 6;
  }
  if (t & 0x02000000) {
    t_decomposed = 7;
  }
  if (t & 0x01000000) {
    t_decomposed = 8;
  }
  if (t & 0x00800000) {
    t_decomposed = 9;
  }
  if (t & 0x00400000) {
    t_decomposed = 10;
  }
  if (t & 0x00200000) {
    t_decomposed = 11;
  }
  if (t & 0x00100000) {
    t_decomposed = 12;
  }
  if (t & 0x00080000) {
    t_decomposed = 13;
  }
  if (t & 0x00040000) {
    t_decomposed = 14;
  }
  if (t & 0x00020000) {
    t_decomposed = 15;
  }
  if (t & 0x00010000) {
    t_decomposed = 16;
  }
  if (t & 0x00008000) {
    t_decomposed = 17;
  }
  if (t & 0x00004000) {
    t_decomposed = 18;
  }
  if (t & 0x00002000) {
    t_decomposed = 19;
  }
  if (t & 0x00001000) {
    t_decomposed = 20;
  }
  if (t & 0x00000800) {
    t_decomposed = 21;
  }
  if (t & 0x00000400) {
    t_decomposed = 22;
  }
  if (t & 0x00000200) {
    t_decomposed = 23;
  }
  if (t & 0x00000100) {
    t_decomposed = 24;
  }
  if (t & 0x00000080) {
    t_decomposed = 25;
  }
  if (t & 0x00000040) {
    t_decomposed = 26;
  }
  if (t & 0x00000020) {
    t_decomposed = 27;
  }
  if (t & 0x00000010) {
    t_decomposed = 28;
  }
  if (t & 0x00000008) {
    t_decomposed = 29;
  }
  if (t & 0x00000004) {
    t_decomposed = 30;
  }
  if (t & 0x00000002) {
    t_decomposed = 31;
  }
  if (t & 0x00000001) {
    t_decomposed = 32;
  }
}

void main() {
  fn13();
  decompose_t();
  p = t_decomposed;
  printf("checksum = %d\n", p);
  return 0;
}
