int g;
int h;
int fn1(unsigned short, unsigned, unsigned short);
unsigned short fn2(signed, unsigned short, unsigned);
short fn3(signed, signed, signed, unsigned short, int);

int main() {
  int n = 1L;
  unsigned o = 0x5A683F60L;
  int p1 = n;
  unsigned p2 = g;
  unsigned short p3 = g;
  int s = 0x57638FF4L;
  signed p1_fn2 = g;
  unsigned short p2_fn2 = s;
  unsigned p3_fn2 = g;
  unsigned u = 0x30A04A8FL;
  signed p1_fn3 = 0x9A5DL;
  signed p2_fn3 = g;
  signed p3_fn3 = p2_fn2;
  unsigned short p4_fn3 = u;
  int p5_fn3 = p1_fn2;
  signed ae = 0xA3L;
  short ak[8];
  
  for (; p2_fn3 <= 7; p2_fn3 += 1) {
    for (p4_fn3 = 0; p4_fn3 <= 7; p4_fn3 += 1) {
      if (h < 0) {
        for (p4_fn3 = 0; p4_fn3 <= 7; p4_fn3 += 1) {
          if (ak[p3_fn3]) {
            break;
          }
        }
      }
    }
  }

  return o;
}