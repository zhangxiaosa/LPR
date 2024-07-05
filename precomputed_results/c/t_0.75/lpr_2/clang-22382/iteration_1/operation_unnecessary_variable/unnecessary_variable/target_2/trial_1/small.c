struct h {
  int i;
  long j;
};

unsigned l;

static void fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
w:
  goto w;
}

unsigned fn2(p1) {
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    // no code remaining
  }
}

int main() {}
