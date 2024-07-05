struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;
static void fn1(unsigned, short, unsigned, signed, long, unsigned);
unsigned fn2(p1) {
  signed i;
  long j;
  unsigned k;
  unsigned p;
  fn1(l, p1, 3, i, j, k);
  for (;;) {
    signed i;
    long j;
    unsigned k;
    unsigned r;
    p = r = p;
  }
}
void fn1(unsigned p1, short p2, unsigned p3, signed p4, long p5, unsigned p6) {
  p6;
w:
  goto w;
}
int main() {}