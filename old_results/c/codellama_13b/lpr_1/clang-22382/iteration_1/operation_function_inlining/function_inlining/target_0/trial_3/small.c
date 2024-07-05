
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
  goto w;
  w:
  for (;;) {
    struct h r;
    p5 = r = p5;
  }
}

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
}

int main() {}
