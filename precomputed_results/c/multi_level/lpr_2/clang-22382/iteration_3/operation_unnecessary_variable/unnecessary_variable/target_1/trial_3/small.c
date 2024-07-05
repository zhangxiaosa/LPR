struct Data {
  int i;
  long j;
  unsigned k;
};

static struct Data fn1(struct Data p5) {
  // No statements affecting variable p5
w:
  goto w;
}

unsigned fn2() {
  struct Data p;
  fn1(p);
  for (;;) {
    struct Data r1;
    p = p;
  }
}

int main() {}
