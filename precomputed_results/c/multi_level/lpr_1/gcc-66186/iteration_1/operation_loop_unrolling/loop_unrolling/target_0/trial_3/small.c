int h;

int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  short ak[8];

  // Unrolled loop with a factor of 2
  for (p2 = 0; p2 <= 6; p2 += 2) {
    // First iteration of the unrolled loop
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }

    // Second iteration of the unrolled loop
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (ak[p3])
          break;
      }
    }
  }

  // Remaining single iteration
  if (p2 == 7 && h < 0) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3])
        break;
    }
  }
}