
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p4) {
  while (1)
    p4 = p4;
}

int fn2() {
  struct h p;
  // struct h r;  // This variable is not used, so we can optimize it out
  fn1(p);
  while (1)
    p = p;  // This assignment can be optimized out since p is not used
}

int main() {
  // No optimizations made
}
