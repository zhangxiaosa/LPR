struct h {
  int i;
  long j;
};

static struct h fn1();

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
  goto w;
w:
  goto w;
}

int main() {}
