struct h {
  int i;
  long j;
  int k;
};

unsigned l;
static struct h fn1(unsigned, short, struct h);

unsigned fn2(p1) {
  struct h p;
  fn1(0, l, p);

  // Unrolled loop
  struct h r1;
  p = r1 = p;

  struct h r2;
  p = r2 = p;

  // Repeat the above lines N times for loop unrolling

  // Original loop body
  // struct h r;
  // p = r = p;
}

struct h fn1(unsigned p1, short p2, struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
