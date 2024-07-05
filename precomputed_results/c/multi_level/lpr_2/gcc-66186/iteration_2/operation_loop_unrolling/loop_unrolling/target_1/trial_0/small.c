int h;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // Loop unrolled by a factor of 2
  for (p2 = 0; p2 <= 7; p2 += 2) {
    if (h < 0) {
      // First iteration of the unrolled loop
      if (ak[p3]) {
        break;
      }

      // Second iteration of the unrolled loop
      if (ak[p3 + 1]) {
        break;
      }
    }

    p2 += 1; // Additional increment to account for the unrolled iterations
  }
}
