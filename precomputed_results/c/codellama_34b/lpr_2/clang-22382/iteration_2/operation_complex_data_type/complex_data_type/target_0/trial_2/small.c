
struct h {
  long i;
  long j;
  long k;
};

static long p1;
static long p4;
static struct h p5;
static long i;
static long j;
static long k;

static void fn1(long p1, long p4, long p5) {
  i = p5.i;
  j = p5.j;
  k = p5.k;
  w:;
  goto w;
}

static long fn2(long p1) {
  struct h p;
  p.i = p1;
  p.j = 3;
  p.k = 0;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    r.i = p.i;
    r.j = p.j;
    r.k = p.k;
    p = r;
  }
}

int main() {
  fn2(1);
  return 0;
}
