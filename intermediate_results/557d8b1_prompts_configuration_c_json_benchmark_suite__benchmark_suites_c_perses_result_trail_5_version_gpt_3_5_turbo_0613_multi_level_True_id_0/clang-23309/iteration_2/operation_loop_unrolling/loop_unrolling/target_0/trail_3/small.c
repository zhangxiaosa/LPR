long fn1(long p1, long p2) { return p1 - p2; }

unsigned fn2(unsigned p1, unsigned p2) { return p1; }

long f;
short g;
short a = 1;

int main() {
  int c;
  
  c = 250UL;
  
  if (a || (c = g)) {
    short d = 0xBCD1;
    if (fn1(d, 1 - c) & 1UL) {
      f = 1UL;
    }
  }
  
  if (a || (c = g)) {
    short d = 0xBCD1;
    if (fn1(d, 1 - c) & 1UL) {
      f = 1UL;
    }
  }

  if (a || (c = g)) {
    short d = 0xBCD1;
    if (fn1(d, 1 - c) & 1UL) {
      f = 1UL;
    }
  }

  printf("checksum = %lX\n", f);
  return 0;
}