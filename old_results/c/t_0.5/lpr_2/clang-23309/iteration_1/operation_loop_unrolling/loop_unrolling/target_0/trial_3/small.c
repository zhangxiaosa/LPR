char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
short w;
short ac = 1;

short fn13() {
  short an;

  // Unrolled loop iteration 1
  if (an = 250) {
    ac || (an = 3);
    short ao = 0xBCD1;
    if (ao - fn4(fn6(1, an), 0xEC) - ac & 1)
      v = 1;
  }

  // Unrolled loop iteration 2
  if (an = 250) {
    ac || (an = 2);
    short ao = 0xBCD1;
    if (ao - fn4(fn6(1, an), 0xEC) - ac & 1)
      v = 1;
  }

  // Unrolled loop iteration 3
  if (an = 250) {
    ac || (an = 1);
    short ao = 0xBCD1;
    if (ao - fn4(fn6(1, an), 0xEC) - ac & 1)
      v = 1;
  }

  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}