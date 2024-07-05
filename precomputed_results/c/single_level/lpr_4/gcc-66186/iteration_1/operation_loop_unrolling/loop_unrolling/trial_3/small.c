signed g;
signed h;
short fn3(signed, signed, signed, unsigned short, int);
unsigned fn4(int, unsigned short, unsigned short, unsigned, unsigned short);
int fn5() {
  int s = 0x57638FF4L;
  unsigned u = 0x30A04A8FL;
  if (fn3(0x9A5DL, g, s, u, g))
    ;
  return 1L;
}
short fn3(signed p1, signed p2, signed p3, unsigned short p4, int p5) {
  int ad = -7L;
  signed ae = 0xA3L;
  if (fn4(ad, 4294967287UL, ad, g, p5))
    ;
  return ae;
}
unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  short ak[8];
  for (p2 = 0; p2 <= 7; p2 += 2) {
    if (h < 0 && ak[p3]) break;
    if (h < 0 && ak[p3 + 1]) break;
  }
  return g;
}
int main() { fn5(); }