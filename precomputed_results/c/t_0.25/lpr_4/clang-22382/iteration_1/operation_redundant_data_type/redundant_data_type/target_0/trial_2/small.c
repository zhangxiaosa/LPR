struct h {
  int i;
  long j;
  unsigned k;
};
unsigned l;
static struct h fn1(unsigned, short, unsigned, struct h);
unsigned fn2(unsigned) {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  for (;;) {
    struct h r;
    p = r;
  }
}
struct h fn1(unsigned p1, short p3, unsigned p5, struct h p6) {
  w:;
}
int main() {}
