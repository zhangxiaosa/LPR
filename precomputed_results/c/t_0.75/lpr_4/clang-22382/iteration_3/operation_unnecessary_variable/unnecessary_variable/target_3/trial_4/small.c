struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // No usage of p5.k
w:
  goto w;
}

unsigned fn2() {
  // Removed unused variable declaration
  for (;;) {
    struct h r;
    p = p;
  }
}

int main() {}
