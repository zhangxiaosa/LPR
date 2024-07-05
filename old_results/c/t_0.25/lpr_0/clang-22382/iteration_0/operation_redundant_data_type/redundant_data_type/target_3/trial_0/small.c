struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);
unsigned fn2() {
  struct h p;
  fn1(0, l, 0, 3, p);
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}.