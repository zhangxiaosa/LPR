
struct { int i; long j; unsigned k; } fn1(unsigned p1, signed p2, unsigned p3, unsigned p4, struct { int i; long j; unsigned k; } p5) {
  p5.k;
w:;
  goto w;
}
unsigned fn2(unsigned p1) {
  struct { int i; long j; unsigned k; } p;
  signed q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct { int i; long j; unsigned k; } r = p;
    p = r;
  }
}
int main() {}
