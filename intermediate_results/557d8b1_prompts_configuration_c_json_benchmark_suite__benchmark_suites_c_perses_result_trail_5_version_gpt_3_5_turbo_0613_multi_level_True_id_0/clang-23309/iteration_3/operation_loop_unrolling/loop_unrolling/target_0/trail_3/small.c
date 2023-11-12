long fn1(long p1, long p2) {
  return p1 - p2;
}

long f;
unsigned g;
short a = 1;

int main() {
  int c;
  c = 250U;

  // Unrolled loop body
  if (fn1(0xBCD1, 1U - c) - a % 2 != 0)
    f = 1;

  if (fn1(0xBCD1, 1U - c) - a % 2 != 0)
    f = 1;

  if (fn1(0xBCD1, 1U - c) - a % 2 != 0)
    f = 1;

  printf("checksum = %ld\n", f);

  return 0;
}