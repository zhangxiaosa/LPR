
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4) {
  // p5 is not used inside the function, so it can be optimized out
  p5.k;
w:;
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
