struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    int p5) {
  p5.k;
w:
  goto w;
}
unsigned fn2(p1) {
  int p;
  fn1(0, 0, p1, 3, p);
  for (;;) {
    int r;
    p = r = p;
  }
}
int main() {}