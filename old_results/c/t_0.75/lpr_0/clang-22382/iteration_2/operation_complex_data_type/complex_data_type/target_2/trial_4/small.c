int main() {
  int h_i;
  long h_j;
  int h_k;

  static int fn1_i;
  static long fn1_j;
  static int fn1_k;

  fn1_k;
w:
  goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;

  int fn1_i;
  long fn1_j;
  int fn1_k;

  fn1_k;
w:
  goto w;

  int r_i;
  long r_j;
  int r_k;

  int p_i;
  long p_j;
  int p_k;

  p_i = r_i = p_i;
  p_j = r_j = p_j;
  p_k = r_k = p_k;
}

int main() {}
