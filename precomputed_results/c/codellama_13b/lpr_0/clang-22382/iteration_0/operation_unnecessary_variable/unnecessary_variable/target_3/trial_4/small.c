
union s {
  int i;
  unsigned k;
};

static union s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4,
                   union s p5) {
  p5.k;
  goto w;
}

unsigned fn2(p1) {
  union s p;
  signed q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    union s r = p;
    p = r;
  }
}

int main() {}
