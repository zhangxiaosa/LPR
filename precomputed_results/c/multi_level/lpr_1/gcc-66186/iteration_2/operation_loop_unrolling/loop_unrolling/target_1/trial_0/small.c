int h;
int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;
  short ak[8];

  // Loop unrolling for p4 = 0; p4 <= 7; p4 += 2;
  p4 = 0;
  if (h < 0) {
    if (ak[(unsigned short)p3]) {
      p4 = 8;  // Increasing p4 beyond the loop bound to terminate the loop
    }
    p4 += 2;
    if (ak[(unsigned short)p3]) {
      p4 = 8;  // Increasing p4 beyond the loop bound to terminate the loop
    }
  }

}
