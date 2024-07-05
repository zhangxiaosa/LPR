
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(long p1, long p2, long p3, long p4, struct h p5) {
  p5.k;
  goto w;
}

int fn2(long p1) {
  struct h p;
  long q;
  fn1(q, 0, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
