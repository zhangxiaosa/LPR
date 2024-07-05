
typedef unsigned long long;

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}

unsigned p;
unsigned v;
short w = 3;

short fn12(int p1, int p2, long p3, short p4) {
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
  return 0;
}

int fn13() {
  fn12(7, 7, 248, 0);
  return 2;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %llX\n", p);
  return 0;
}
