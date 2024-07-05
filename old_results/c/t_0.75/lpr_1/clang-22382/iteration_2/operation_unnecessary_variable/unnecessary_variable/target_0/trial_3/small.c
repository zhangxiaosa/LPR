struct H {
  // short i; (optimized out)
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  // p5.k; (optimized out)
  w:
  goto w;
}

unsigned fn2() {
  struct H p;
  // fn1(p); (optimized out)
  for (;;) {
    struct H r;
    // p = r = p; (optimized out)
  }
}

int main() {}
