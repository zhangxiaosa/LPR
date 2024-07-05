
unsigned char ac = 1;
int al = 3;
short an = 250;
short ao = 0xBCD1;
int t = 0;
int v = 0;
short w = 3;

int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

int fn13() {
  for (w = 3; w; w -= 1) {
    an = w;
    t = ac || (an = w) == 0x294A85636008822D;
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
