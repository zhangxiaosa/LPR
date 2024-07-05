struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static void fn1(unsigned int p3, int i, long int j, unsigned int k) {
  k;
  while (1) {
  }
}

unsigned int fn2() {
  int p_i;
  long int p_j;
  unsigned int p_k;
  int q;
  fn1(q, p_i, p_j, p_k);
  while (1) {
    int r_i;
    long int r_j;
    unsigned int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
