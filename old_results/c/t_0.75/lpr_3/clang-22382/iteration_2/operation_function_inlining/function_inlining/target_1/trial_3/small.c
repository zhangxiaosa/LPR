struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;

  // Inlined function fn1() body
  p.k;
w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
