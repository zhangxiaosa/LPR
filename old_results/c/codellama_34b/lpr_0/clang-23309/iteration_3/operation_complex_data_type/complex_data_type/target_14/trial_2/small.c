
int p1, p2, p3, p4;
short w;
unsigned v;

int main() {
  w = 3;
  p1 = 7;
  p2 = 7;
  p3 = 248;
  p4 = 0;
  v = fn12(p1, p2, p3, p4);
  printf("checksum = %X\n", v);
  return 0;
}

int fn12(int p1, int p2, long p3, short p4) {
  int an;
  while (w) {
    an = 250;
    if (p2 || (an = w)) {
      short ao = 48873;
      if (fn3(ao, fn6(1, an)) - p2 & 1)
        v = 1;
    }
    w--;
  }
  return v;
}

int fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}
