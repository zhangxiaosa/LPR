static int fn1(unsigned p1, int p5_i, long p5_j, int p5_k) {
  int p5_i = p5_i;
w:
  goto w;
}

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;
  fn1(0, p_i, p_j, p_k);
  for (;;)
    p_i = r_i = p_i;
}

int main() {}