char fn4(unsigned p1, unsigned p2) { return p1; }

short p;
int t;
short w;
short ac = 1;
int main() {
  int an;
  short ao = 0xBCD1;

  // Loop unrolling
  // Iteration 1
  w = 3;
  if (an = 250) {
    t = ac || (an = w) == 0x294A85636008822;
    if ((ao - fn4(1 - an, 0xEC) - t) % 2)
      p = 1;
  }

  // Iteration 2
  w = 2;
  if (an = 250) {
    t = ac || (an = w) == 0x294A85636008822;
    if ((ao - fn4(1 - an, 0xEC) - t) % 2)
      p = 1;
  }

  // Iteration 3
  w = 1;
  if (an = 250) {
    t = ac || (an = w) == 0x294A85636008822;
    if ((ao - fn4(1 - an, 0xEC) - t) % 2)
      p = 1;
  }

  printf("checksum = %X\n", p);
  return 0;
}