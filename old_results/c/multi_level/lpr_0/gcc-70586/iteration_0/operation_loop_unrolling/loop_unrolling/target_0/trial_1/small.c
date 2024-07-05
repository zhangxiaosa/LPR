typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;

c fn3(p1) {
  b l;
  a m = 0x809CL;
  d n;

  // Unrolled loop iterations
  d o1 = 0xE576516EL;
  d o2 = 0xE576516EL;
  d o3 = 0xE576516EL;
  d o4 = 0xE576516EL;
  d o5 = 0xE576516EL;
  d o6 = 0xE576516EL;
  d o7 = 0xE576516EL;

  if (i)
    printf("l_1179=%lld\n", (long long)l);

  p1 = 0x60781BCDL >= m ^ 4294967287UL - o1;
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o2;
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o3;
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o4;
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o5;
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o6;
  p1 = 0x60781BCDL >= m ^ 4294967287UL - o7;

  return p1;
}

int main() {
  if (fn3(1))
    ;
}