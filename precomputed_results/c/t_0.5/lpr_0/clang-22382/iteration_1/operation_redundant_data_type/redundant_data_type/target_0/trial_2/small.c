unsigned l;

unsigned fn2(p1) {
  struct { signed i; long j; unsigned k; } p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct { signed i; long j; unsigned k; } r;
    p = r = p;
  }
}

struct { signed i; long j; unsigned k; } fn1(unsigned p1, short p2, struct { signed i; long j; unsigned k; } p5) {
  ((struct { signed i; long j; unsigned k; }*)(&p5))->k;
w:
  goto w;
}

int main() {}