struct H {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct H fn1(unsigned p1, struct H p5) {
w:
  goto w;
}

unsigned fn2() {
  struct H p;
  int q;
  fn1(q, p);
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {}
