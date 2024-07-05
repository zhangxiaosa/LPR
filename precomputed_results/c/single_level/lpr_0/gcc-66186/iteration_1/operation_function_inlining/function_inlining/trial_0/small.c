int g;
int h;
int fn1(unsigned short, unsigned, unsigned short);
unsigned short fn2(signed, unsigned short, unsigned);
short fn3(signed, signed, signed, unsigned short, int);

int main() {
  int n = 1L;
  unsigned o = 0x5A683F60L;
  
  // Inlined code from fn1
  int s = 0x57638FF4L;
  int t = 1L;
  fn2(g, s, g);
  
  return o;
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
  
  for (; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  
  return ae;
}