typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

d fn2(d p1, d p2) { return p1 - p2; }

c i;

c fn3(p1) {
  b l;
  a m = 0x809CL;
  d n;

  // First unrolled iteration (n = 0)
  d o1 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o1);

  // Second unrolled iteration (n = 8)
  d o2 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o2);

  // Third unrolled iteration (n = 16)
  d o3 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o3);

  // Fourth unrolled iteration (n = 24)
  d o4 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o4);

  // Fifth unrolled iteration (n = 32)
  d o5 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o5);

  // Sixth unrolled iteration (n = 40)
  d o6 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o6);

  // Seventh unrolled iteration (n = 48)
  d o7 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o7);

  return p1;
}

int main() {
  if (fn3(1))
    ;
}