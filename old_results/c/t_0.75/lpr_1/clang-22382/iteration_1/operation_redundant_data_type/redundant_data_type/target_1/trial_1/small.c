unsigned l;

unsigned fn1(unsigned, unsigned, unsigned);
unsigned fn2() {
  unsigned p;
  fn1(0, l, p);
  for (;;) {
    unsigned r;
    p = r;
  }
}

unsigned fn1(unsigned p1, unsigned p2, unsigned p5) {
  p5;
}

int main() {}
