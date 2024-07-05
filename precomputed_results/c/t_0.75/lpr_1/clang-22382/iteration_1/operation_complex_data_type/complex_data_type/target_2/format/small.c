struct H {
  short i;
  long j;
  unsigned k;
};

unsigned l;

static struct H fn1(unsigned p1, short p2, struct H p5) {
  p5.k;
  w:
  goto w;
}

unsigned fn2() {
  struct H p;
  int q;
  fn1(q, l, p);
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {};