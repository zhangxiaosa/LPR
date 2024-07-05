struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();
unsigned fn2(p1) {
  struct h p;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = p;
  }
}

struct h fn1(unsigned p1, struct h p5) {
w:;
  goto w;
}

int main() {}
