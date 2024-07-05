unsigned fn2() {
  struct h p;
  int q;
  fn1(q, 3, 3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;

w:
  goto w;
}

int main() {}
