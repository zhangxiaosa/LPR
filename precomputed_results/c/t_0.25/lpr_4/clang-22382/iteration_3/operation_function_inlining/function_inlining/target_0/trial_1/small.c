struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  // Inlined code of fn1
  p.k;
w:
  goto w;
  // End of inlined code
  for (;;) {
    struct h r;
    p = r;
    r = p;
  }
}

int main() {}
