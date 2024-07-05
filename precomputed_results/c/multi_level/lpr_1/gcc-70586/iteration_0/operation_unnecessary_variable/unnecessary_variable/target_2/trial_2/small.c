unsigned fn3(short);
int fn4() {
  fn3(1);
}
unsigned fn3(short p1) {
  int l;
  short m = 0x809CL;
  if (0)
    printf("l_1179=%d\n", l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - 0xE576516E;
  if (0)
    printf("l_1179=%d\n", l);
  return p1;
}
int main() { fn4(); }
