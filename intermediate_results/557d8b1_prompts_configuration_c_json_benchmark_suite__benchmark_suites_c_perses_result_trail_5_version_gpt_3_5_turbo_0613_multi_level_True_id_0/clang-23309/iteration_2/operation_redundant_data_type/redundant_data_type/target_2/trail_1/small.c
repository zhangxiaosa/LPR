unsigned long fn1(unsigned long p1, unsigned long p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1; }

unsigned long f;
unsigned short g;
unsigned short a = 1;

unsigned int main() {
  unsigned int c;
  for (g = 3; g; g -= 1) {
    if (c = 250UL) {
      a || (c = g);
      unsigned short d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xECL)) - a & 1)
        f = 1;
    }
  }
  printf("checksum = %lu\n", f);
  return 0;
}