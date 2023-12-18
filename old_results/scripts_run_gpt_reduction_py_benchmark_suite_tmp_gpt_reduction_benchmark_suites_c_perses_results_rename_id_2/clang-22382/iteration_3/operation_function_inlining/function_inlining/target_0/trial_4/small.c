struct h {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  for (;;) {
    p = p;
  }
}