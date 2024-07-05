struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p6) {
  p6;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
