static int fn1(unsigned p1, int p5_i) {
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
  
  fn1(0, p_i);
  for (;;) {
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}