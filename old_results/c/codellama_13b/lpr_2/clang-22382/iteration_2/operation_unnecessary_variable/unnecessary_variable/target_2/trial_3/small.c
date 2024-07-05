
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, struct h p5) {
  p5.k;
  goto w;
w:;
}

unsigned fn2(p1) {
  struct h p;
  fn1(3, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h h;
  h.j = 0;
  fn2(3);
  return 0;
}
