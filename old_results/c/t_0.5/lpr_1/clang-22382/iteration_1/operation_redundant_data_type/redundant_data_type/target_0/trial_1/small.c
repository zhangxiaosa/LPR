struct h {
  int i;
  long j;
  int k;
};

static int fn1();
unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int fn1(unsigned p1, int p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
