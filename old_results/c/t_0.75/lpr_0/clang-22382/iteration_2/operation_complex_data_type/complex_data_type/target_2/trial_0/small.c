struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p_i, long p_j, int p_k) {
  for (;;) {
    // Code inside the loop
  }
}

unsigned fn2() {
  unsigned result;

  int p_i;
  long p_j;
  int p_k;

  struct h r;
  int r_i;
  long r_j;
  int r_k;

  fn1(p_i, p_j, p_k);

  for (;;) {
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;

    // Code inside the loop

    result = r_i;
  }

  return result;
}

int main() {
  return 0;
}