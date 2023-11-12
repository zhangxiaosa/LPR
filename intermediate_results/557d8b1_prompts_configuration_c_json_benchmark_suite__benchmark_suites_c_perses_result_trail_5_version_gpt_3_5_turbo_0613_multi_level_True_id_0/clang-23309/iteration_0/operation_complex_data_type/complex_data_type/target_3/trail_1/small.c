unsigned fn1(unsigned long p1, unsigned long p2) { return p1 - p2; }

unsigned e;
unsigned long f;
short g;
short a = 0;
int main() {
  short h;
  int c;
  for (g = 3; g > 0; g -= 1) {
    if (c == 250UL) {
      h = (a != 0 || (c = g) == 0x294A85636008822LL);
      if ((fn1(0xBCD1, 1 - c) - h) & 1UL)
        f = 1;
    }
  }
  e = (f != 0);
  printf("checksum = %lx\n", e);
  return 0;
}