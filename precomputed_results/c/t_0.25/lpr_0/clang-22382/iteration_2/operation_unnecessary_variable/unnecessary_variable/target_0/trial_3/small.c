struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r1 = p;
    p = r1;
  }
}