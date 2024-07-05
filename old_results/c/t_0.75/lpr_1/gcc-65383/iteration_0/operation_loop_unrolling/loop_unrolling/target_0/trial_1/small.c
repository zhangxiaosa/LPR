typedef int b;
typedef unsigned c;
typedef unsigned d;
d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;
d fn2() {
  // Unrolled loop (2 iterations)
  {
    // Unrolled loop body (iteration 1)
    c q_1 = 0xC3L;
    b r_1[5][9][5];
    if (h[2])
      return q_1;
    g = r_1[i][i][i];

    // Unrolled loop body (iteration 2)
    c q_2 = 0xC3L;
    b r_2[5][9][5];
    if (h[2])
      return q_2;
    g = r_2[i][i][i];
  }
}
int main() {
  fn2();
}