
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  // k is unused, so we can optimize it out
  return p;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    // p and r are the same variable, so we can optimize out the assignment
    // and just use the variable r instead
    r = p;
  }
}

int main() {}
