typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;
c fn3(short);
b fn4() {
  if (fn3(1))
    ;
}
c fn3(short p1) {
  b l;
  short m = 0x809CL;
  if (i)
    printf("l_1179=%ld\n", (long)l);
  d o = 0xE576516EL;
  if (i)
    printf("l_1179=%ld\n", (long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  return p1;
}
int main() { fn4(); }
