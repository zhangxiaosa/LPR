struct h {
  int i;
  long j;
  int k;
};
unsigned l;
static struct h fn1() {
  w:
    goto w;
}

int fn2() {
  struct h p;
  w:
    goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}