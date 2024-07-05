
struct h {
  long j;
  unsigned l;
};

unsigned fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
