struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // p5.k is not used
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  // fn1(p) is not used
  for (;;) {
    struct h r1 = p;
    p = r1;
  }
}

int main() {}
