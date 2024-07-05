struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;
static struct h fn1(unsigned, short, struct h);
unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct h r;
    p = r;
  }
}
struct h fn1(unsigned p1, short p2, struct h p5) {
  goto w;
w:
  goto w;
}
int main() {}
