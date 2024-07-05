struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  fn1();
}

struct h fn1() {
w:;
  goto w;
}