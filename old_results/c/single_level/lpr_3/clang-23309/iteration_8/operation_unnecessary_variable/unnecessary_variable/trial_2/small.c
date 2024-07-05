int fn3(int p1, int p2) { return p1 - p2; }

unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned p;

void fn9(unsigned p1, char *p2_ptr, int p3) { p = p1; }

int main() {
  int am = 1L;
  int an = 250UL;
  short ao = 0xBCD1L;
  short w;
  short ac = 1L;
  int v = 0;
  unsigned p2;

  for (w = 3; w != 0; w -= 1) {
    p2 = fn5(v, ac) || (an = w) == 0x294A85636008822DL;
    if ((fn3(ao, fn4(fn6(am, an), 0xECL)) - p2) & 1UL) {
      v = 1UL;
    }
  }

  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}