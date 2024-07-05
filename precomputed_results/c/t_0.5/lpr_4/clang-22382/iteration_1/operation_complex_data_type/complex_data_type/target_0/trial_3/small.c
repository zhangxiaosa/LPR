struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  signed p5_i = p5.i;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  int p_i;
  int p_j;
  int p_k;
  int r_i;
  int r_j;
  int r_k;
  fn1(0, l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
