struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p3, struct h p5) {
  p5.k;
  while (1) {
  }
}

unsigned fn2() {
  int q;
  fn1(q, /* Removed 'p' from here */);
  while (1) {
    struct h r;
    /* Removed assignment of 'p' from here */
  }
}

int main() {}
