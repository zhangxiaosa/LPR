struct h {
  short i;
  long j;
  unsigned k;
};

unsigned int l;

static struct h fn1(unsigned int p1, short p2, struct h p5) {
  p5.k;
  w:;
  goto w;
}

unsigned int fn2() {
  struct h p;
  fn1(l, 0, p);
}

int main() {}
