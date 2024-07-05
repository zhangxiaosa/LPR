
unsigned fn2() {
  struct s p;
  signed q;
  fn1(q, l, 3, p);
  for (;;) {
    struct s r = p;
    p = r;
  }
}
