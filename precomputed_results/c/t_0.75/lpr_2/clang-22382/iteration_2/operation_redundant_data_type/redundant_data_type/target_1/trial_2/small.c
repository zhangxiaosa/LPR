static int fn1(unsigned p1, short p2, unsigned p3, unsigned p4, int p5_i, long p5_j, int p5_k) {
  // p5.k; removed
  w:
  goto w;
}

unsigned fn2(p1) {
  int p_i;
  long p_j;
  int r_i;
  long r_j;

  fn1(0, 0, p1, 3, p_i, p_j, r_i, r_j);

  for (;;) {
    int p;
    int r;
    p = r = p;
  }
}

int main() {}
