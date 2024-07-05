int g;
int h;
unsigned fn4(unsigned short, unsigned short, unsigned);
int fn5() {
  unsigned short p2 = 4294967287UL;
  unsigned short p3 = -7L;
  unsigned p4 = g;
  
  short ak[8];
  
  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  
  return 0xA3L;
}

unsigned fn4(unsigned short p2, unsigned short p3, unsigned p4) {
  short ak[8];
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() { fn5(); }
