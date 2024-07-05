int h;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // Loop unrolled by a factor of 2
  for (p2 = 0; p2 <= 7; p2 += 2) {
    for (p4 = 0; p4 <= 7; p4 += 2) {
      if (h < 0) {
        if (ak[p3] || ak[p3 + 1]) {
          // Condition is optimized without the need for a break statement
        }
      }
    }

    p2 += 1; // Additional increment to account for the unrolled iterations
  }
}