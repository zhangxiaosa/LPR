
struct h {
  long i;
  long j;
  unsigned k;
};
unsigned l;
static struct h fn1(unsigned, signed, unsigned, unsigned, struct h);
unsigned fn2(unsigned p1) {
  struct h p;
  signed q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r = p;
    p = r;
  }
}
struct h fn1(unsigned p1, signed p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}
