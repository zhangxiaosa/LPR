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

  // Unrolled loop iteration 1
  d o1 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o1);

  // Unrolled loop iteration 2
  d o2 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o2);

  // Unrolled loop iteration 3
  d o3 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o3);

  // Unrolled loop iteration 4
  d o4 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o4);

  // Unrolled loop iteration 5
  d o5 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o5);

  // Unrolled loop iteration 6
  d o6 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o6);

  return p1;
}

int main() {
  if (fn3(1))
    ;
}