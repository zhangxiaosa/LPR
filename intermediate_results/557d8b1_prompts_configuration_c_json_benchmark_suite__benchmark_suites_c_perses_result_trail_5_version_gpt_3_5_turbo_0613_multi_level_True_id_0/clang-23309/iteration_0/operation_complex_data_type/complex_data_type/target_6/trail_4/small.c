unsigned fn2(unsigned p1, unsigned p2) { return p1; }

unsigned e;
long f;
short g;
short a = 1;

int main() {
  short h;
  long b = 1;
  int c;
  short d = 0xBCD1;  // Optimized variable

  for (g = 3; g; g -= 1) {
    if (c = 250UL) {
      h = a || (c = g) == 0x294A85636008822LL;

      if ((d + c - 1) - h & 1UL) {
        f = 1UL;
      }
    }
  }

  e = f;
  printf("checksum = %X\n", e);
  return 0;
}