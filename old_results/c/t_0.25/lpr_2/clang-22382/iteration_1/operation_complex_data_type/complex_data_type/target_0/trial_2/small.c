struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned, short, struct h);

unsigned fn2(unsigned p1) {
  int p_i;
  long p_j;
  int p_k;
  struct h p;
  fn1(0, l, p);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    struct h r;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
