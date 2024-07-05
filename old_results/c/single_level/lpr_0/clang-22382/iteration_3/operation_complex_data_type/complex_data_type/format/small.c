struct hjson {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct hjson fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, struct hjson p5) {
  p5.k;
w:
  goto w;
}

unsigned int fn2(p1) {
  struct hjson p;
  int q;
  fn1(q, l, p1, 3, p);
  struct hjson r1;
  for (;;)
    p = r1 = p;
}

int main() {
}
