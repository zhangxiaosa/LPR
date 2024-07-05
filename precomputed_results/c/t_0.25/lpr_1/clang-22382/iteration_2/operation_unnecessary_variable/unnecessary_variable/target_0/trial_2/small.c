struct h {
  int i;
  long j;
  int k;
};

static struct h fn1() {
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1();
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
