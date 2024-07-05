
int fn2(int p1, int p2) {
  return p1 - p2;
}

int fn3(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

int fn5(int p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int w = 3;
  int an;
  int am = 1;
  int ao = 0xBCD1;
  int ac = 1;
  int ab = 0;
  int al = 3;
  int v = 0;
  int p1;
  int p2;
  int p3;
  int p4;
  int p5;

  for (int i = 0; i < 3; i++) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xE)), p2) & 1) {
      v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
