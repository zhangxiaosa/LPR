struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  return p5;
}

unsigned fn2() {
  struct H p;
  fn1(p);
  struct H r;
  p = r;
  return p.k;
}

int main() {}
