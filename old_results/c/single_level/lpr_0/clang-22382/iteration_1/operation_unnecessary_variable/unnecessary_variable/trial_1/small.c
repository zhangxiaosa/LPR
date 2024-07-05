struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  struct h r1;
  for (;;) p = r1 = p;
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  // Removed unused expression p5.k
  goto w;
w:
  goto w;
}

int main() {}
