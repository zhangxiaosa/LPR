struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  w:
  goto w;
}

unsigned fn2() {
  struct H p;
  fn1();
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {}
