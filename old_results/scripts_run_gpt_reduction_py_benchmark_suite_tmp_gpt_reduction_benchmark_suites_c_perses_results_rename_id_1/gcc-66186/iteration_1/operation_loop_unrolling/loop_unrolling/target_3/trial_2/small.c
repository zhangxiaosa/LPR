int h;
int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  short ak[8];

  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 2) {
      // Unrolled loop: Branch 1
      if (h < 0 && !ak[p3]) {
        // Loop body (Branch 1)
        // ...
        // Original code inside the if
      }

      // Unrolled loop: Branch 2
      if (h < 0 && ak[p3]) {
        // Loop body (Branch 2)
        // ...
        // Original code inside the if
      }
    }
  }
}