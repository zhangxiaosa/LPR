
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, unsigned p4, struct h p5) {
  p5.k;
  goto w;

w:
  for (;;) {
    struct h r;
    p = r = p;
  }
}

unsigned fn2(p1) {
  struct h p;
  fn1(3, 3, p1, 3, p);
}

int main() { /* ... */ }
