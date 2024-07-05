typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
d fn1(d p1, d p2) { return p1 + p2; }
d fn2(d p1, d p2) { return p1 - p2; }
unsigned i;
unsigned fn3(unsigned p1) {
  int l;
  short m = 0x809C;
  unsigned n;
  for (n = 0; n <= 49; n = fn1(n, 8)) {
    unsigned o = 0xE576516E;
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
