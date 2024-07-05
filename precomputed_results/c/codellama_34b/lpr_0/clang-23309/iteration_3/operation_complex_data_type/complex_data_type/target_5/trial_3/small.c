
int fn4(int an) {
  return fn6(1, an);
}

unsigned fn5(unsigned an) {
  return fn6(1, an);
}

int fn3(int x, int y) {
  return x - fn4(y);
}

unsigned fn6(unsigned x, unsigned y) {
  return x - fn5(y);
}

int fn12(int p1, int p2, int p3, int p4) {
  int an;
  while (p1) {
    an = 250;
    if (p2 || (an = p1)) {
      int ao = 48873;
      if (fn3(ao, fn6(1, an)) - p2 & 1)
        v = 1;
    }
    p1--;
  }
  return 0;
}

int main() {
  fn12(7, 7, 248, 0);
  printf("checksum = %X\n", v);
  return 0;
}
