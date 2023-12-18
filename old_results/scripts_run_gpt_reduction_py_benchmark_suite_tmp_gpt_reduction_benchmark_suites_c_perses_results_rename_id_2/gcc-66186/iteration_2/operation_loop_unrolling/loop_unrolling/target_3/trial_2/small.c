int h;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // Loop unrolled by a factor of 2
  for (p2 = 0; p2 <= 6; p2 += 1) {
    for (p4 = 0; p4 <= 5; p4 += 1) {
      if (h < 0) {
        if (ak[p3]) {
          break;
        }
      }
    }

    // Additional increment to account for the unrolled iterations
    p2 += 1;
  }
}