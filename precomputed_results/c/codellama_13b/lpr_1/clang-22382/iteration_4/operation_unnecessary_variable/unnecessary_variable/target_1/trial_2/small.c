
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  while (1)
    p4 = p4;
}

int fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  while (1)
    p = r = p;
}

int main() {
  // Optimizations made:
  // 1. Constant propagation:
  //   * p1 and p2 in fn1() are unused parameters, so we can remove them from the function declaration and the function body.
  //   * The function body is now empty, so we can remove the while loop as well.
  // 2. Copy propagation:
  //   * p and r in fn2() are the same variable, so we can replace all occurrences of r with p.
  //   * The function body is now empty, so we can remove the while loop as well.
}
