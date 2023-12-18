struct h {
	int i;
	long j;
	int k;
};

static void fn1(void) {
  while (1) {
  }
}

unsigned fn2() {
  struct h p;
  fn1();
  while (1) {
    struct h r;
  }
}