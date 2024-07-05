int g;
int h;
int fn1(unsigned short, unsigned, unsigned short);
unsigned short fn2(signed, unsigned short, unsigned);
short fn3(signed, signed, signed, unsigned short, int);
int fn5() {
  int n = 1L;
  unsigned o = 0x5A683F60L;
  fn1(n, g, g);
  return o;
}
int fn1(unsigned short p1, unsigned p2, unsigned short p3) {
  int s = 0x57638FF4L;
  fn2(g, s, g);
  return 1L;
}
unsigned short fn2(signed p1, unsigned short p2, unsigned p3) {
  unsigned u = 0x30A04A8FL;
  if (fn3(0x9A5DL, g, p2, u, p1))
    ;
  return 0;
}
short fn3(signed p1, signed p2, signed p3, unsigned short p4, int p5) {
  signed ae = 0xA3L;
  short ak[8];
  for (; p2 <= 6; p2 += 2) {
    // Unrolled iteration 1
    for (p4 = 0; p4 <= 6; p4 += 2) {
      if (h < 0)
        for (p4 = 0; p4 <= 6; p4 += 2)
          if (ak[p3])
            break;
      if (h < 0)
        for (p4 = 1; p4 <= 6; p4 += 2)
          if (ak[p3])
            break;
    }

    // Unrolled iteration 2
    for (p4 = 0; p4 <= 6; p4 += 2) {
      if (h < 0)
        for (p4 = 0; p4 <= 6; p4 += 2)
          if (ak[p3])
            break;
      if (h < 0)
        for (p4 = 1; p4 <= 6; p4 += 2)
          if (ak[p3])
            break;
    }
  }
  // Remaining iterations if p2 is odd
  if (p2 == 7) {
    for (p4 = 0; p4 <= 6; p4 += 2) {
      if (h < 0)
        for (p4 = 0; p4 <= 6; p4 += 2)
          if (ak[p3])
            break;
      if (h < 0)
        for (p4 = 1; p4 <= 6; p4 += 2)
          if (ak[p3])
            break;
    }
    if (h < 0)
      for (p4 = 0; p4 <= 6; p4 += 1)
        if (ak[p3])
          break;
  }
  return ae;
}
int main() {
  fn5();
}