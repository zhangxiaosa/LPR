typedef short a;
typedef int b;
typedef unsigned short c;
typedef unsigned int d;
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
  for (n = 0; n <= 49; n = n + 8) {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }
  return p1;
}
int main() {
  if (fn3(1) - fn3(2)) {
    return (short)1 - (short)2;
  } else {
    return (short)2 - (short)1;
  }
}