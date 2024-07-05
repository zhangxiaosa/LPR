struct hjson {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct hjson fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct hjson p5) {
  p5.k;
  w:
    goto w;
}

unsigned fn2(p1) {
  struct hjson p;
  int q;
  fn1(q, l, p1, 3, p);

  for (;;) {
    p = p;
  }
}

int main() {
}
