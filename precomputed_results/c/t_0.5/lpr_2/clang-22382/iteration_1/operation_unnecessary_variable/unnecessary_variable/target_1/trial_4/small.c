struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1(struct h p5) {
  // Variable p5_i optimized out
w:
  goto w;
}

int main() {}
