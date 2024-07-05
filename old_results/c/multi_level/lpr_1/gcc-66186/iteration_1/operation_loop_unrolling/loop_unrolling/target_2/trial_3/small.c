int h;
int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  short ak[8];

  for (p2 = 0; p2 <= 7; p2 += 1) {
    // Unrolled loop iteration 1
    if (h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled loop iteration 2
    p4 += 2;
    if (p4 <= 7 && h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled loop iteration 3
    p4 += 2;
    if (p4 <= 7 && h < 0) {
      if (ak[p3])
        break;
    }

    // Unrolled loop iteration 4
    p4 += 2;
    if (p4 <= 7 && h < 0) {
      if (ak[p3])
        break;
    }
  }
}