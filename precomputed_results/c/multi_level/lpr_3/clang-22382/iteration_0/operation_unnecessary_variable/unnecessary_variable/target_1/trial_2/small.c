struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  w:
    goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
