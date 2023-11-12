unsigned long fn1(unsigned long p1, unsigned long p2) { return p1 - p2; }

unsigned long fn2(unsigned long p1, unsigned long p2) { return p1; }

long f;
unsigned long g;
unsigned long a = 1;

int main() {
  unsigned long c;
  for (g = 3; g; g -= 1) {
    if (c = 250UL) {
      a || (c = g);
      unsigned long d = 0xBCD1;
      if (fn1(d, fn2(1 - c, 0xECL)) - a & 1)
        f = 1;
    }
  }
  printf("checksum = %lX\n", f);
  return 0;
}