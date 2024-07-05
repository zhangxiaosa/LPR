struct H {
  short i;
  long j;
  unsigned k;
};

static unsigned fn1(short p5) {
  p5;
w:
  goto w;
}

unsigned fn2() {
  unsigned p;
  fn1(p);
  for (;;) {
    short r;
    p = r = p;
  }
}

int main() {}
