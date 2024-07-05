struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // No effect, can be removed
  // p5.k;
  w:
  goto w;
}

unsigned fn2() {
  // No changes to this function
  struct h p;
  fn1(p);
  // Infinite loop can be optimized out
  // for (;;) {
  //   struct h r;
  //   p = r = p;
  // }
}

int main() {
  // No changes to this function
}
