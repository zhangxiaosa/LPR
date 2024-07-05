struct Data {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct Data p;
  p;
  for (;;) {
    p = p;
  }
}