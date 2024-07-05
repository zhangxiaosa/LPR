struct h {
  int i;
  long j;
  int k;
};

unsigned l;
static struct h fn1(unsigned p1, struct h p5) {
  goto w;
}

unsigned fn2() {
  struct h p;
  int q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
