struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(short p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  short p_i;
  long p_j;
  unsigned p_k;
  fn1(p_i, p_j, p_k);
  for (;;) {
    struct H r;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
