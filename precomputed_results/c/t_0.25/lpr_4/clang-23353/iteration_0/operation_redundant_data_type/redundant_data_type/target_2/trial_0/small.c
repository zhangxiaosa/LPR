unsigned char fn1(unsigned char p1, unsigned char p2) { return p1 * p2; }

struct g {
  int h;
};

unsigned char i;
struct g j;

unsigned char *fn2(unsigned char p1, unsigned char *p2, unsigned char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j.h ^= fn1(p3, i) && 1L;
  return p2;
}

unsigned char main() { return 0; }