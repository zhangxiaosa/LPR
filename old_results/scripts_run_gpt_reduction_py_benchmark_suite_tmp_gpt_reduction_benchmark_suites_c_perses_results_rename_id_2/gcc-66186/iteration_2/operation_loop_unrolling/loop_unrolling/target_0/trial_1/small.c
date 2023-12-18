int h;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  // Loop unrolling
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;

    p4 = 1;
    if (ak[p3])
      break;

    p4 = 2;
    if (ak[p3])
      break;

    p4 = 3;
    if (ak[p3])
      break;

    p4 = 4;
    if (ak[p3])
      break;

    p4 = 5;
    if (ak[p3])
      break;

    p4 = 6;
    if (ak[p3])
      break;

    p4 = 7;
    if (ak[p3])
      break;
  }
}