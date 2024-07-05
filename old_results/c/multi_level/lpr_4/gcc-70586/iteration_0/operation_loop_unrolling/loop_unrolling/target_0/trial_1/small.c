typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;
c fn3(p1) {
  b l;
  a m = 0x809CL;
  d n;
  d o;

  // Unrolled loop iteration 1
  n = 0;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  // Unrolled loop iteration 2
  n = 8;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  // Unrolled loop iteration 3
  n = 16;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  // Unrolled loop iteration 4
  n = 24;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  // Unrolled loop iteration 5
  n = 32;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  // Unrolled loop iteration 6
  n = 40;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  // Unrolled loop iteration 7
  n = 48;
  o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;

  return p1;
}
b fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}