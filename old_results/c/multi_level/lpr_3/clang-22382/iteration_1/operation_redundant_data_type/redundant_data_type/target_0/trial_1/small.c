static int fn1(int i, long j, unsigned k) {
  unsigned p5_k = k;
w:
  goto w;
}

int fn2() {
  int p_i;
  long p_j;
  unsigned p_k;

  fn1(p_i, p_j, p_k);
  
  for (;;) {
    int r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}