struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p3, unsigned p5, struct h p6) {
  p6.k;
w:;
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
