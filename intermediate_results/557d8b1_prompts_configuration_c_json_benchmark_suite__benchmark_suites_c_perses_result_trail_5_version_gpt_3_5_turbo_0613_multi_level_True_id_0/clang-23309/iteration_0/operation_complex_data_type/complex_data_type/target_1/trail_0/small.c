unsigned fn1(long p1, long p2) {
  return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
  return p1;
}

unsigned e = 1;

long f;

short g;

short a = 1L;

int main() {
  long b = 1;

  int c;

  g = 3;

  c = 250;

  short h = 1;

  if (fn1(0xBCD1, fn2(1 - 250, 0xEC)) - 1 & 1) {
    f = 1;
  }

  e = f;

  printf("checksum = %X\n", e);

  return 0;
}