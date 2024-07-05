struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int l;

static struct h fn1(unsigned int, short, struct h);

unsigned int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned int p1, short p2, struct h p5) {
  p5.k;
  w:
  goto w;
}

int main() {}
