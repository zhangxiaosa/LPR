struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  int p5_i;
  long p5_j;
  int p5_k;

  p5_k;
w:;
  goto w;
}

int main() {}
