struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  // No need to declare or assign p5_i
  w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
