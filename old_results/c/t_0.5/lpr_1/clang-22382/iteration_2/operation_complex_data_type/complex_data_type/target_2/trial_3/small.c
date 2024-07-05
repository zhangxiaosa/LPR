struct h {
  int i;
  long j;
  int k;
};

int main() {
  int r_i;
  long r_j;
  int r_k;

  for (;;) {
    int p_i;
    long p_j;
    int p_k;

    fn1_k(p_i, p_j, p_k);

    int r_i_new = p_i;
    long r_j_new = p_j;
    int r_k_new = p_k;

    r_i = r_i_new;
    r_j = r_j_new;
    r_k = r_k_new;
  }

  return 0;
}

int fn1_k(int p5_i, long p5_j, int p5_k) {
  int p5_k_new;

w:
  goto w;
}