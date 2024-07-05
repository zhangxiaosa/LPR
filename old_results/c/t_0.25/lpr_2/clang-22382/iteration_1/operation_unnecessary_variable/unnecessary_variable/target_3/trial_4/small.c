struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(struct h p5) {
  // Variable p5_i is optimized out
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
