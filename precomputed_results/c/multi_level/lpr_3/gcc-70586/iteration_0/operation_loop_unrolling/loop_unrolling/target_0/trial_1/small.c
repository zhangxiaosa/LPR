typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;
c fn3(a);
b fn4() {
  if (fn3(1))
    ;
}
c fn3(a p1) {
  b l;
  a m = 0x809CL;
  d n;

  // First iteration (n = 0)
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Second iteration (n = 8)
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Third iteration (n = 16)
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Fourth iteration (n = 24)
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n",(long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  return p1;
}

int main() {
  fn4();
}