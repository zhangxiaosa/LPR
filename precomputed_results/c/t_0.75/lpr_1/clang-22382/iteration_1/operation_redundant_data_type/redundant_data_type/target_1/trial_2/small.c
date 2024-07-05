unsigned l;

unsigned fn1(unsigned, short, unsigned);
unsigned fn2() {
  unsigned p;
  fn1(q, l, p);
  for (;;) {
    unsigned r;
    p = r;
  }
}
unsigned fn1(unsigned p1, short p2, unsigned p5) {
w:;
  goto w;
}
int main() {}