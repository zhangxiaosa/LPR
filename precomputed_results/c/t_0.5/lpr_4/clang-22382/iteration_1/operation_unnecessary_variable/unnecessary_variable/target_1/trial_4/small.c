struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  // No need for p5_i
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, l, p1, 3, p);
  for (;;) p = r = p;
}

int main() {}
