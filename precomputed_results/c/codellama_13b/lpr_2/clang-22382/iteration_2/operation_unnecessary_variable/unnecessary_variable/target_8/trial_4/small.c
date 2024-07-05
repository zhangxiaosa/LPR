
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  for (;;) {
    struct h r;
    p = r = p;
  }
}

unsigned fn2() {
  for (;;) {
    ;
  }
}
