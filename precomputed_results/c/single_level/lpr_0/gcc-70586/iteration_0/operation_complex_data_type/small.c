typedef unsigned c;
typedef unsigned d;
d fn2(d p1, d p2) { return p1 - p2; }
c i;
c fn3(p1) {
  int l;
  short m = 0x809CL;
  d o1 = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o1);
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  return p1;
}
int main() {
  if (fn3(1))
    ;
}
