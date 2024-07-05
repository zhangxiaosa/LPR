#include <stdio.h>

char g;
short h;

char fn1(unsigned short, char, unsigned short);
unsigned short fn2(char, unsigned short, char);
short fn3(int, int, int, unsigned short, char);
unsigned fn4(int, unsigned short, unsigned short, char, unsigned short);

int fn5() {
  char n = 1L;
  unsigned o = 0x5A683F60;
  fn1(n, (unsigned)g, (unsigned)g);
  return o;
}

char fn1(unsigned short p1, char p2, unsigned short p3) {
  char s = 0x57638FF4;
  char t = 1;
  fn2((int)g, s, (unsigned)g);
  return t;
}

unsigned short fn2(int p1, unsigned short p2, unsigned p3) {
  unsigned u = 0x30A04A8F;
  if (fn3(0x9A5D, (int)g, p2, u, p1))
    ;
  return 0;
}

short fn3(int p1, int p2, int p3, unsigned short p4, char p5) {
  char ad = -7;
  char ae = 0xA3;
  if (fn4(ad, (unsigned short)4294967287, ad, (char)g, (unsigned short)p5))
    ;
  return ae;
}

unsigned fn4(int p1, unsigned short p2, unsigned short p3, char p4,
             unsigned short p5) {
  short ak[8] = {};
  for (unsigned short p2 = 0; p2 <= 7; p2 += 1)
    for (unsigned short p4 = 0; p4 <= 7; p4 += 1)
      if ((unsigned short)h < 0)
        for (unsigned short p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return (unsigned)g;
}

int main() {
  fn5();
}
