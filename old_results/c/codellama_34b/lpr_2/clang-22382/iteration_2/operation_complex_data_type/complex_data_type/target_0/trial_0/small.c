
struct h {
  int i;
  int j;
  int k;
};

static struct h fn1(long p1, long p4, struct h p5) {
  p5.i;
  p5.j;
  p5.k;
  goto w;
}

long fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
