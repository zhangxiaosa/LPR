int t;
int v;
short w;
short ac = 1;
short fn4(short p1, short p2) { return p1; }
int main() {
  int an;
  short ao = 0xBCD1;
  int p;

  for (w = 3; w; w -= 1) {
    an = 250;
    t = ac || (an = w) == 0x294A85636008822D;

    if ((ao - fn4(1 - an, 0xEC)) - t & 1)
      v = 1;
  }

  p = v;
  printf("checksum = %d\n", p);
  return 0;
}