long fn1(long p1, long p2) {
  return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
  return p1;
}

long f;
short a = 1;

int main() {
  int c;

  for (short g = 3; g > 0; g--) {
    if (c == 250UL) {
      c = g;
      short d = 0xBCD1;

      if ((d - (1 - c)) % 2 != 0)
        f = 1UL;
    }
  }

  long e = f;
  printf("checksum = %X\n", e);
  return 0;
}