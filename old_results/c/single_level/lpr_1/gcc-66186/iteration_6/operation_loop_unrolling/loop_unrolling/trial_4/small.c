int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  short ak[8];
  for (p2 = 0; p2 <= 7; p2 += 4) {
    for (p4 = 0; p4 <= 7; p4 += 4) {
      if (h < 0) {
        bool breakLoop = false;

        // Unrolled iteration 1
        if (ak[p3]) {
          breakLoop = true;
          break;
        }
        if (ak[p3 + 1]) {
          breakLoop = true;
          break;
        }

        // Unrolled iteration 2
        if (ak[p3 + 4]) {
          breakLoop = true;
          break;
        }
        if (ak[p3 + 5]) {
          breakLoop = true;
          break;
        }

        if (breakLoop)
          break;
      }
    }
  }
}