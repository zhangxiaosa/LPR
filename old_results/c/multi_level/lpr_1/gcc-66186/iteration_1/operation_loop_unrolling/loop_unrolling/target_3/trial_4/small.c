int h;

int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  short ak[8];

  // Unrolled p4 loop
  for (p2 = 0; p2 <= 7; p2 += 1) {
    p4 = 0;
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 = 2;
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 = 4;
    if (h < 0) {
      if (ak[p3])
        break;
    }
    p4 = 6;
    if (h < 0) {
      if (ak[p3])
        break;
    }
  }

  // Unrolled p2 loop
  p2 = 0;
  // Unrolled p4 loop (iteration 0)
  p4 = 0;
  if (h < 0) {
    if (ak[p3])
      break;
  }
  p4 = 2;
  if (h < 0) {
    if (ak[p3])
      break;
  }
  p4 = 4;
  if (h < 0) {
    if (ak[p3])
      break;
  }
  p4 = 6;
  if (h < 0) {
    if (ak[p3])
      break;
  }

  p2 = 1;
  // Unrolled p4 loop (iteration 1)
  p4 = 0;
  if (h < 0) {
    if (ak[p3])
      break;
  }
  p4 = 2;
  if (h < 0) {
    if (ak[p3])
      break;
  }
  p4 = 4;
  if (h < 0) {
    if (ak[p3])
      break;
  }
  p4 = 6;
  if (h < 0) {
    if (ak[p3])
      break;
  }
}