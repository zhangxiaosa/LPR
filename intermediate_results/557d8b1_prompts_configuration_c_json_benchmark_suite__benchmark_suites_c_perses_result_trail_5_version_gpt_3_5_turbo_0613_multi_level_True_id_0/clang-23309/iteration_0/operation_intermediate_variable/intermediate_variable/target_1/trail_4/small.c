fn1(long p1, long p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1; }

unsigned e;
long f;
short g;

int main() {
  short h;
  int c;
  for (g = 3; g; g -= 1)
    if (c = 250UL) {
      h = (c = g) == 0x294A85636008822LL;
      short d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xECL)) - h & 1UL)
        f = 1UL;
    }
  e = f;
  printf("checksum = %X\n", e);
  return 0;
}