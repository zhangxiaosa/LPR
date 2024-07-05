
typedef unsigned d;
typedef short e;
typedef unsigned g;

long fn3(long p1, long p2) { return p1 - p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }

unsigned p;
unsigned v;
short w = 3;
short ac = 1L;

int fn13() {
  return 2UL;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
