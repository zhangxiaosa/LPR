int h;

int main() {
  short ak[8];
  unsigned p2, p2_1, p2_2, p2_3;
  unsigned short p3 = -7L;
  unsigned p4;

  p2 = 0;
  p2_1 = 1;
  p2_2 = 2;
  p2_3 = 3;

  // Unrolled loop
  while ((p2 <= 7) && (p2_1 <= 7) && (p2_2 <= 7) && (p2_3 <= 7)) {
    // Loop body for p2
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        // Inner loop for p4
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }

    // Loop body for p2_1
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        // Inner loop for p4
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }

    // Loop body for p2_2
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        // Inner loop for p4
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }

    // Loop body for p2_3
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        // Inner loop for p4
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }

    p2 += 4;
    p2_1 += 4;
    p2_2 += 4;
    p2_3 += 4;
  }

  return 0;
}