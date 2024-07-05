struct h {
  int i;
  long j;
  int k;
};

unsigned int l;

static int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned int fn2(int p1) {
  int p_i;
  long p_j;
  int p_k;
  int q;
  int r_i;
  long r_j;
  int r_k;
  int result;

  result = fn1(q, l, p1, 3, p_i, p_j, p_k);

  for (;;) {
    r_i;
    r_j;
    r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {
  return 0;
}