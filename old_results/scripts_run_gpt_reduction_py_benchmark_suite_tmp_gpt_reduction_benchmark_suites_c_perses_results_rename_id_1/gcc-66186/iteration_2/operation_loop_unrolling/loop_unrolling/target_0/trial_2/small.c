int h;

int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;
  short ak[8];
  
  // Unrolled loop
  for (p2 = 0; p2 <= 6; p2 += 2) {
    // Loop body (1st iteration)
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
    
    // Loop body (2nd iteration)
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 2) {
        if (ak[(unsigned short)p3]) {
          break;
        }
      }
    }
  }
}
