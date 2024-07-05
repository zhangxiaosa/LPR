struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
}

int main() {}