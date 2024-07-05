int fn1(unsigned short, unsigned, unsigned short);
unsigned short fn2(int, unsigned short, unsigned);
short fn3(int, int, int, unsigned short, int);
unsigned fn4(int, unsigned short, unsigned short, unsigned, unsigned short);

int fn5() {
  fn1(1L, [constant value of g], [constant value of g]);
  return 0;
}

int fn1(unsigned short p1, unsigned p2, unsigned short p3) {
  int t = 1L;
  fn2([constant value of g], 0x57638FF4L, [constant value of g]);
  return t;
}

unsigned short fn2(int p1, unsigned short p2, unsigned p3) {
  if (fn3(0x9A5DL, [constant value of g], p2, 0x30A04A8FL, p1))
    ;
  return 0;
}

short fn3(int p1, int p2, int p3, unsigned short p4, int p5) {
  if (fn4(4294967289L, 4294967287UL, 4294967289L, [constant value of g], p5))
    ;
  return 0xA3L;
}

unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  short ak[8];
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if ([constant value of g] < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return [constant value of g];
}

int main() { fn5(); }
