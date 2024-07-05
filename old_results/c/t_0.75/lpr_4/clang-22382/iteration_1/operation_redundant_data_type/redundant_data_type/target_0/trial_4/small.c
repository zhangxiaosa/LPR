static int i;
static long j;
static int k;

static int fn1(unsigned p1, unsigned p3, int p5_k);

unsigned fn2() {
  int p_i;
  long p_j;
  int p_k;
  int q;
  fn1(q, 3, p_k);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int fn1(unsigned p1, unsigned p3, int p5_k) {
w:
  goto w;
}

int main() {}
