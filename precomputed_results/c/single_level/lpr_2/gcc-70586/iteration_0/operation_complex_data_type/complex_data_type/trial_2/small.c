short fn1(unsigned p1, unsigned p2) { return p1 + p2; }

short fn2(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned int i;

unsigned int fn3(unsigned int p1) {
  int l;
  short m = 0x809C;
  unsigned int n;
  for (n = 0; n <= 49; n = fn1(n, 8)) {
    unsigned int o = 0xE576516E;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
  }
  return p1;
}

int main() {
  if (fn3(1))
    ;
}