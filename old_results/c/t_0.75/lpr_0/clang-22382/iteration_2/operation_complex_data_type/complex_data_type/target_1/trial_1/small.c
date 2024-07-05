struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  fn1(p5_i, p5_j, p5_k);
  for (;;) {
    p5_i = p5_i;
    p5_j = p5_j;
    p5_k = p5_k;
  }
}

int main() {}