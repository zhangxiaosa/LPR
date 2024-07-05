struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  // No operations affecting j
  goto w;
}

unsigned fn2() {
  struct h p;
  // No operations affecting j
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
