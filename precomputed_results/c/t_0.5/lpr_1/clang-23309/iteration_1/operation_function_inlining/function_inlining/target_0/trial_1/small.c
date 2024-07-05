typedef long c;
int fn2(int p1, int p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

short p;
int t;
short w;
short ac = 1;

int main() {
  c am = 1;
  int an;
  short ao = 0xBCD1;

  for (w = 3; w; w -= 1) {
    an = 250;
    if (1) {
      t = ac || (an = w) == 0x294A85636008822;
      if ((ao - (am - an & 0xFF)) - t & 1)
        p = 1;
    }
  }

  printf("checksum = %X\n", p);
  return 0;
}