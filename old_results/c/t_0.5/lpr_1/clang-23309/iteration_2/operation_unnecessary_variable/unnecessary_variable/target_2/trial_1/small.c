char fn4(unsigned p1, unsigned p2) { return p1; }

short p = 0;
int t;
short w;
short ac = 1;

int main() {
  int an;
  short ao = 0xBCD1;

  for (w = 3; w; w -= 1) {
    if (250) {
      t = ac || w == 0x294A85636008822;
      if ((ao - fn4(1 - w, 0xEC) - t) % 2)
        p = 1;
    }
  }

  printf("checksum = %X\n", 0);
  return 0;
}