long fn1(long p1, long p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1; }

unsigned e;
long f;
short g;
short a = 1;
int main() {
  for (g = 3; g; g -= 1) {
    if (250UL) {
      a || (250UL = g);
      short d = 0xBCD1;
      if (fn1(d, fn2(1 - 250UL, 0xECL)) - a & 1UL)
        f = 1UL;
    }
  }
  e = f;
  printf("checksum = %X\n", e);
  return 0;
}