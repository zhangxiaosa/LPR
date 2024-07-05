unsigned fn3(unsigned short);
int fn4() {
  if (fn3(static_cast<unsigned short>(1)))
    ;
}
unsigned fn3(unsigned short p1) {
  int l;
  unsigned short m = 0x809CL;
  unsigned o0 = 0xE576516EL;
  if (i)
    printf("l_1179=%u\n", static_cast<unsigned>(l));
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - (unsigned)o0;
  if (i)
    printf("l_1179=%u\n", static_cast<unsigned>(l));
  return p1;
}
int main() { fn4(); }