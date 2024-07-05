struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static void fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

void fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
