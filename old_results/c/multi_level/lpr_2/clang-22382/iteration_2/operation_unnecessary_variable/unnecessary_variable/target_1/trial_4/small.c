struct h {
  int i;
  long j;
  unsigned k;
};

static struct h fn1(struct h) {
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r1;
    p = r1;
  }
}

int main() {}
