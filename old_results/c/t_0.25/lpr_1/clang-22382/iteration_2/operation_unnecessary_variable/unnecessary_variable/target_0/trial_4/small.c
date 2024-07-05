struct h {
  int i;
  long j;
  int k;
};

static struct h fn1() {
  while (1) {
    // Infinite loop
  }
}

unsigned fn2() {
  struct h p;
  fn1();
  while (1) {
    // Infinite loop
  }
}