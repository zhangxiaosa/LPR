long fn1(long p1, long p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1; }

unsigned e;
long f;
short a = 1;

int main() {
  short h;
  long b = 1;
  int c;
  unsigned target = 3;
  for (target = 3; target; target -= 1) {
    if (c = 250UL) {
      c = target;
      h = a || (c == 0x294A85636008822LL);
      short d = 0xBCD1;
      if ((fn1(d, fn2(1 - target, 0xECL)) - h) & 1UL)
        f = 1UL;
    }
  }
  e = f;
  printf("checksum = %lx\n", e);
  return 0;
}