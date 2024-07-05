
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(long p1, long p2, long p3, struct h p4) {
  while (1)
    p4 = p4;
}

long fn2(long p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  while (1)
    p = r = p;
}

long main() {}
