unsigned l;

static struct {
  signed i;
  long j;
  unsigned k;
} h;

int fn2() {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {}
