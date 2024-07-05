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
  
  d o0 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o0;

  d o1 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o1;

  d o2 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o2;

  d o3 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o3;
  
  return p1;
}

int main() { 
  fn4();
}