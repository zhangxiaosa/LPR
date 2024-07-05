struct Data {
  int i;
  long j;
  unsigned k;
};

static struct Data fn1(struct Data p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct Data p;
  fn1(p);
  for (;;) {
    p = p;
  }
}

int main() {}
