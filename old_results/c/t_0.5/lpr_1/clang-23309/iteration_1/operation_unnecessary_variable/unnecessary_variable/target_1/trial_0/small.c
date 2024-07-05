char fn4(unsigned p1, unsigned p2) { return p1; }

short p;
int t;
short w;
short ac = 1;
int main() {
  short ao = 0xBCD1;
  for (w = 3; w; w -= 1) {
    if (250) {
      t = ac;
      if ((ao - fn4(1 - 250, 0xEC) - t) % 2)
        p = 1;
    }
  }
  printf("checksum = %X\n", p);
  return 0;
}