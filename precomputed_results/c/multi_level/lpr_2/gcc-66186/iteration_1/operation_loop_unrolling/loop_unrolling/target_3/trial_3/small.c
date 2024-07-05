#pragma unroll
int h;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;

  int unrolled_iterations = 8;
  if (h < 0) {
    unrolled_iterations = h / 8;
    if (h % 8 != 0)
      unrolled_iterations++;
    if (unrolled_iterations <= 0)
      unrolled_iterations = 1;
  }

  int total_iterations = unrolled_iterations * 7;
  for (p2 = 0; p2 <= total_iterations; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < -1) {
        break;
      }
    }
  }

  return 0;
}