static int p5_i;
static long p5_j;
static unsigned p5_k;

static void fn1(int p5_i, long p5_j, unsigned p5_k) {
  w:
  goto w;
}

unsigned fn2() {
  fn1(p5_i, p5_j, p5_k);
  for (;;) {
    int r1_i;
    long r1_j;
    unsigned r1_k;
    p5_i = r1_i = p5_i;
    p5_j = r1_j = p5_j;
    p5_k = r1_k = p5_k;
  }
}

int main() {
  return 0;
}