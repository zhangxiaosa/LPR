struct H {
  short i;
  long j;
};

static struct H fn1(struct H p5) {
  goto w;
w:
  goto w;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {}
