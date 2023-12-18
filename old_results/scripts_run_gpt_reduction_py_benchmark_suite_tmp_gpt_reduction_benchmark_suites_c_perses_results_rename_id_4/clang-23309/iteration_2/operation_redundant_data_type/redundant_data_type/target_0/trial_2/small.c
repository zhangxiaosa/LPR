int t;
long v;
short w;
short ac = 1;

char fn4(int p1, int p2) { return (char)p1; }

int main() {
  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    t = (ac || (an = w) == 0x294A85636008822D);
    int ao = 0xBCD1;
    if (((ao - fn4(1 - an, 0xEC)) - t) & 1)
      v = 1;
  }
  int p = (int)v;
  printf("checksum = %X\n", p);
  return 0;
}