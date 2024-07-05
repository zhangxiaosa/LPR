int g;
int h;
unsigned fn4(int, unsigned short, unsigned short, unsigned, unsigned short);
int fn5() {
  if (fn4(7L, 4294967287UL, -7L, g, g))
    ;
  return 0x5A683F60L;
}
unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  short ak[8];

  // Loop unrolled
  if (h < 0) {
    if (ak[p3])
      ;
    if (ak[p3])
      ;
    if (ak[p3])
      ;
    if (ak[p3])
      ;
    if (ak[p3])
      ;
    if (ak[p3])
      ;
    if (ak[p3])
      ;
    if (ak[p3])
      ;
  }

  return g;
}

int main() {
  fn5();
}