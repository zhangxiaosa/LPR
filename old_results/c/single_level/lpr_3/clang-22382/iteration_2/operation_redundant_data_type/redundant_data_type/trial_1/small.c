struct { signed i; long j; unsigned k; } {
  signed i;
  long j;
  unsigned k;
};

static struct { signed i; long j; unsigned k; } fn1(unsigned p1, unsigned p3, unsigned p4, struct { signed i; long j; unsigned k; } p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct { signed i; long j; unsigned k; } p;
  int q;
  fn1(q, p1, 3, p);
  for (;;) {
    struct { signed i; long j; unsigned k; } r;
    p = r = p;
  }
}

int main() {}