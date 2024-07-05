struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // int p5_i = p5.i; // Variable p5_i optimized out
  // w: // Infinite loop label w optimized out
  // goto w; // Infinite loop code optimized out
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
