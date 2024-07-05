
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int q, int p2, int q, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(int q) {
  struct h p;
  int r;
  fn1(q, 0, q, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
