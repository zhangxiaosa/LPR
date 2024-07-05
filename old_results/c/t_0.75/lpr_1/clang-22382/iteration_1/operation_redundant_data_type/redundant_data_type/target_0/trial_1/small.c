short i;
long j;
unsigned k;
unsigned l;
static unsigned fn1(unsigned, short, short, long, unsigned);
unsigned fn2() {
  short p1;
  long p2;
  short p5_i;
  long p5_j;
  unsigned p5_k;
  int q;
  fn1(q, l, p1, p2, p5_k);
  for (;;) {
    short r_i;
    long r_j;
    short r_k;
    p1 = r_i = p1;
    p2 = r_j = p2;
    p5_i = r_i = p5_i;
    p5_j = r_j = p5_j;
    p5_k = r_k = p5_k;
  }
}
unsigned fn1(unsigned p1, short p2, short p5_i, long p5_j, unsigned p5_k) {
  p5_k;
w:;
  goto w;
}
int main() {}
