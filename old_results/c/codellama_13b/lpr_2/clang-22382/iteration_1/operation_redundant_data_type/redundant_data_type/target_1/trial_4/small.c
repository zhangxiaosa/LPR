
struct h {
  short i;
  long j;
  short k;
};
unsigned l;
static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.k;
  for (;;) {
    struct h r;
    p5 = r = p5;
  }
}
unsigned fn2(p1) {
  struct h p;
  fn1(3, l, p1, 3, p);
}
int main() {}
