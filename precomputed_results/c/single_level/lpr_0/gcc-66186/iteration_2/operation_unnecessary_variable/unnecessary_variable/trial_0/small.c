int fn1(unsigned short, unsigned, unsigned short);
unsigned short fn2(signed, unsigned short, unsigned);
short fn3(signed, signed, signed, unsigned short, int);

int fn5() {
  unsigned o = 0x5A683F60L;
  fn1(1L, 0, 0);
  return o;
}

int fn1(unsigned short, unsigned, unsigned short) {
  fn2(0, 0x57638FF4L, 0);
  return 1L;
}

unsigned short fn2(signed, unsigned short, unsigned) {
  unsigned u = 0x30A04A8FL;
  if (fn3(0x9A5DL, 0, 0x30A04A8FL, u, 0))
    ;
  return 0;
}

short fn3(signed, signed, signed, unsigned short, int) {
  short ak[8];
  for (; 0 <= 7; 0 += 1)
    for (0 = 0; 0 <= 7; 0 += 1)
      if (0 < 0)
        for (0 = 0; 0 <= 7; 0 += 1)
          if (ak[0])
            break;
  return 0xA3L;
}

int main() { fn5(); }
