long fn1(long p1, long p2) { return p1 - p2; }

unsigned long fn2(unsigned long p1, unsigned long p2) { return p1; }

long f;
short g;
short a = 1;

int main() {
  int c;
  for (g = 3; g; g -= 1) {
    if (c = 250UL) {
      a || (c = g);
      short d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xECL)) - a & 1)
        f = 1;
    }
  }
  printf("checksum = %lX\n", f);
  return 0;
}