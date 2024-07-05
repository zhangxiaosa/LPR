struct h {
  int i;
  long j;
  int k;
};

unsigned l;
static struct h fn1(unsigned, unsigned, struct h);
unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(unsigned p1, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}
