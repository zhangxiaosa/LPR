
struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;
static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.j;
w:;
  goto w;
}
unsigned fn2(p1) {
  struct h p;
  unsigned q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}

// Optimized version

int main() {
  // Decompose struct h into separate variables
  signed i;
  long j;
  unsigned k;

  // Decompose fn1
  unsigned p1;
  short p2;
  unsigned p3;
  unsigned p4;
  struct h p5;
  p5.j;
  goto w;

  // Decompose fn2
  unsigned p1;
  unsigned q;
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
