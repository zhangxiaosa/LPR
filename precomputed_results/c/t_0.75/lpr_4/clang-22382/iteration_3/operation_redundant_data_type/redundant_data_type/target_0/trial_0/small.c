struct h {
  int i;
  long j;
  int k;
};

static int fn1(int p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2() {
  int p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
