int h;
int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;
  short ak[8];

  // Unrolled loop
  for (p2 = 0; p2 <= 3; p2 += 2) {
    p4 = 0;
    if (h < 0) {
      while (p4 <= 7) {
        if (ak[(unsigned short)p3]) {
          break;
        }
        p4 += 2;
        if (ak[(unsigned short)p3]) {
          break;
        }
        p4 += 2;
      }
    }
  }
}