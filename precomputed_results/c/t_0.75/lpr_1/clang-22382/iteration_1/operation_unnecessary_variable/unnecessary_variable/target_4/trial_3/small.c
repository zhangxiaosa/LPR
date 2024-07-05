struct H {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct H fn1(struct H p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  for (;;) {
    p = p;
  }
}

int main() {}
