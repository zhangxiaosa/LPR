int h;

int fn5() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // First iteration of outer loop
  p2 = 0;

  // First iteration of inner loop
  p4 = 0;
  if (h < 0) {
    // First iteration of inner nested loop
    p4 = 0;
    if (ak[p3])
      break;
  }

  // Second iteration of inner loop
  p4 = 1;
  if (h < 0) {
    // Second iteration of inner nested loop
    p4 = 0;
    if (ak[p3])
      break;
  }

  // Third iteration of inner loop
  p4 = 2;
  if (h < 0) {
    // Third iteration of inner nested loop
    p4 = 0;
    if (ak[p3])
      break;
  }

  // Remaining iterations of inner loop
  p4 = 3;
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;
  }
  p4 = 4;
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;
  }
  p4 = 5;
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;
  }
  p4 = 6;
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;
  }
  p4 = 7;
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;
  }

  return 1L;
}

int main() {
  fn5();
}