typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;

c fn3(p1) {
  b l;
  a m = 0x809CL;
  d n;
  
  d o1 = 0xE576516EL;  // Unrolled iteration 1
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o1;
  
  d o2 = 0xE5765176L;  // Unrolled iteration 2
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o2;
  
  d o3 = 0xE576517EL;  // Unrolled iteration 3
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o3;
  
  d o4 = 0xE5765186L;  // Unrolled iteration 4
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o4;
  
  d o5 = 0xE576518EL;  // Unrolled iteration 5
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o5;
  
  d o6 = 0xE5765196L;  // Unrolled iteration 6
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o6;
  
  d o7 = 0xE576519EL;  // Unrolled iteration 7
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o7;
  
  return p1;
}

b fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}