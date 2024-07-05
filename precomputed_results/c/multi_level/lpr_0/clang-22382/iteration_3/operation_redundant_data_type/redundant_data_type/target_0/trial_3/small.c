static unsigned fn1(unsigned p1, unsigned p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2() {
  unsigned p;
  fn1(0, p);
  while (1) {
    unsigned r;
    p = r = p;
  }
}

int main() {}