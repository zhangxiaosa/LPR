int h;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  for (p2 = 0; p2 <= 7; p2 += 1) {
    if (h < 0) {
      // Loop unrolled for (p4 = 0; p4 <= 7; p4 += 1)
      if (ak[p3]) break;  // Iteration 0
      if (ak[p3]) break;  // Iteration 1
      if (ak[p3]) break;  // Iteration 2
      if (ak[p3]) break;  // Iteration 3
      if (ak[p3]) break;  // Iteration 4
      if (ak[p3]) break;  // Iteration 5
      if (ak[p3]) break;  // Iteration 6
      if (ak[p3]) break;  // Iteration 7
    }
  }
}