
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  p4.k;
  goto w;
}

int fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  while (1)
    p = r = p;
}

int main() {
  struct h s;
  s.i = 0;
  s.j = 1;
  s.k = 2;
  fn2(s.k);
  return 0;
}
