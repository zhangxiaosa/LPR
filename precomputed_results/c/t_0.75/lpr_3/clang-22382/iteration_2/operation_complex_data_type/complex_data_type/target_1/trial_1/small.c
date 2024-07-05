struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, struct h p5) {
  for (;;) {
    goto w;
  }
}

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    struct h r;
  }
}

int main() {}
