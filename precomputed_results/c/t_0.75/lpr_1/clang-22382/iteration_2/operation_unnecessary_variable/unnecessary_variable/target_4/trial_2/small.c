struct H {
  short i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct H p;
  for (;;) {
    struct H r;
    p = r;
  }
}