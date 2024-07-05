int h;
int main() {
  short ak[8];
  unsigned p2, p4;
  unsigned short p3 = -7L;

  for (p2 = 0; p2 <= 5; p2 += 2) {
    if (h < 0) {
      // First iteration of innermost loop (p4 = 0)
      if (ak[p3])
        break;

      // Second iteration of innermost loop (p4 = 1)
      p4 = 1;
      if (ak[p3]) {
        p4 = 8;  // Skip remaining iterations
        break;
      }

      // Additional iterations of innermost loop (p4 = 2, 3, ..., 7)
      p4 = 2;
      if (ak[p3]) {
        p4 = 8;
        break;
      }
      p4 = 3;
      if (ak[p3]) {
        p4 = 8;
        break;
      }
      p4 = 4;
      if (ak[p3]) {
        p4 = 8;
        break;
      }
      p4 = 5;
      if (ak[p3]) {
        p4 = 8;
        break;
      }
      p4 = 6;
      if (ak[p3]) {
        p4 = 8;
        break;
      }
      p4 = 7;
      if (ak[p3]) {
        p4 = 8;
        break;
      }
    }
  }
}