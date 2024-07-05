struct h {
  signed int i;
  long int j;
  unsigned int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2() {
  signed int p_i;
  long int p_j;
  unsigned int p_k;
  struct h p = {p_i, p_j, p_k};
  fn1(p);
  for (;;) {
    signed int r_i;
    long int r_j;
    unsigned int r_k;
    struct h r = {r_i, r_j, r_k};
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
  }
}

int main() {}
