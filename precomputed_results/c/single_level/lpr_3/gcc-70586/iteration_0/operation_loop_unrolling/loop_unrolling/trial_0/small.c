typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
d fn1(d p1, d p2) { return p1 + p2; }
d fn2(d p1, d p2) { return p1 - p2; }
c i;
c fn3(p1) {
  b l;
  a m = 0x809CL;
  d n;
  d o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o);
  n = fn1(0, 8);
  if (n <= 42) {
    o = fn1(o, 8);
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o);
    n = fn1(n, 8);
  }
  if (n <= 48) {
    o = fn1(o, 8);
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o);
    n = fn1(n, 8);
  }
  if (n <= 49) {
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o);
  }
  return p1;
}

int main() {
  if (fn3(1))
    ;
}