struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int fn2() {
  struct h p;
  fn1(l, p);
  for (;;) {
    struct h r;
  }
}

int main() {}
