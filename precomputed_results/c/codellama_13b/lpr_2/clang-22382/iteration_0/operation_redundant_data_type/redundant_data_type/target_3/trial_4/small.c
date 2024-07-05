
unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
             unsigned int p5);
unsigned int fn2(unsigned int p1) {
  unsigned int q;
  fn1(q, p1, 3, p1, p1);
  while (1) {
    unsigned int r;
    p1 = r = p1;
  }
}
unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
             unsigned int p5) {
  p5;
w:;
  goto w;
}
int main() {}
