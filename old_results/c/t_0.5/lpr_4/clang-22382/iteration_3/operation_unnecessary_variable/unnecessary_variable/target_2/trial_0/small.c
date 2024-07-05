struct h {
  int i;
  long j;
};

static struct h fn1(unsigned p1, struct h p5) {
  int p5_i = p5.i;
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  struct h r;
  fn1(0, p);
  for (;;)
    p = r = p;
}

int main() {}
