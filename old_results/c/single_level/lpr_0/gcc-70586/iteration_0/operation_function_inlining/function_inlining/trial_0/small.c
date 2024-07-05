typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
d fn1(d p1, d p2) {
  return p1 + p2;
}
d fn2(d p1, d p2) {
  return p1 - p2;
}
c i;
b fn4() {
  b l;
  a m = 0x809CL;
  d n;
  for (n = 0; n <= 49; n = fn1(n, 8)) {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    b p1 = 0x60781BCL >= m ^ 4294967287UL;
    p1 = p1 - o;
  }
}
int main() { fn4(); }
