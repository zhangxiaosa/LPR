int h;
short ak[8];
unsigned p2;
unsigned short p3 = -7;
unsigned p4;

for (p2 = 0; p2 <= 7; p2 += 2) {
  if (h < 0) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        break;
      }
    }
    p4 += 1; // Additional increment to account for the unrolled iteration
  }
  p2 += 1; // Additional increment to account for the unrolled iteration
}