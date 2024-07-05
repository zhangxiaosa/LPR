struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static void fn1(unsigned p1, short p3, unsigned p5, struct h p6) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    // No need to assign p to r and then back to p
  }
}

int main() {}
