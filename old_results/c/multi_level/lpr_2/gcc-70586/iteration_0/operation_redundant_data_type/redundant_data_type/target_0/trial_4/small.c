typedef int b;
typedef unsigned c;
typedef unsigned d;
d fn2(d p1, d p2) { return p1 - p2; }
c i;
c fn3(c p1) {
  b l;
  int m = 0x809C;
  unsigned o_0 = 0xE576516EUL;
  if (i)
    printf("l_1179=%hd\n", l);
  p1 = fn2(0x60781BCDUL >= m ^ 4294967287UL, o_0);
  if (i)
    printf("l_1179=%hd\n", l);
  return p1;
}
int main() {
  fn3(1);
  return 0;
}