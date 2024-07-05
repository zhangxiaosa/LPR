static unsigned fn1(unsigned p5) {
  p5.k;
w:
  goto w;
}
unsigned fn2() {
  unsigned p;
  fn1(p);
  for (;;) {
    unsigned r1;
    p = r1 = p;
  }
}
int main() {}
