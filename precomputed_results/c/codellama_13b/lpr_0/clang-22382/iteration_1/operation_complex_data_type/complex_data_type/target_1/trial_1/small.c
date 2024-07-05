
static struct s fn1(unsigned p1, unsigned p3, struct s p5) {
  p5.k;
w:;
  goto w;
}
unsigned fn2(p1) {
  long i;
  long j;
  unsigned k;
  fn1(0, p1, i, j, k);
  for (;;) {
    long i2;
    long j2;
    unsigned k2;
    i2 = i;
    j2 = j;
    k2 = k;
    i = i2;
    j = j2;
    k = k2;
  }
}
int main() {}
