unsigned l;
static struct {
  int i;
  long j;
  int k;
} fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct {
  int i;
  long j;
  int k;
} p5) {
  p5.k;
w:
  goto w;
}
unsigned fn2(p1) {
  struct {
    int i;
    long j;
    int k;
  } p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct {
      int i;
      long j;
      int k;
    } r;
    p = r = p;
  }
}
int main() {}