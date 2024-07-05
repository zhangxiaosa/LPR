struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  unsigned p5_k = p5.k;
w:
  goto w;
}

int fn2(p1) {
  struct h p;
  fn1(q, p1, 3, p);
  for (;;) {
    p = p;
  }
}

int main() {}
