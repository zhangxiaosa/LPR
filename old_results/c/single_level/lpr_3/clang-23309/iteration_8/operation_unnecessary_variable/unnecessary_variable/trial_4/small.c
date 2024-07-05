int fn3(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;

void fn9(unsigned p1, char *p2_ptr, int p3) {
  p = p1;
}

int v;
short w;
short ac = 1L;

int main() {
  int am = 1L;
  short ao = 0xBCD1L;

  for (w = 3; w; w -= 1) {
    unsigned p2 = fn5(p, ac);
    if (fn3(ao, fn4(fn6(am, 250UL), 0xECL)) - p2 & 1UL)
      v = 1UL;
  }

  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}
