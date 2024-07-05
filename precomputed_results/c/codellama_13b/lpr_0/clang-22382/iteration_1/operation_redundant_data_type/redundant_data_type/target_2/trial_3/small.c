
unsigned fn1(unsigned p1, unsigned p3, unsigned p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  unsigned q;
  fn1(0, p1, q);
  for (;;) {
    unsigned r = q;
    q = r;
  }
}

int main() {}
