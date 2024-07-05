struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, unsigned p3, unsigned p4, struct h p5) {
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
