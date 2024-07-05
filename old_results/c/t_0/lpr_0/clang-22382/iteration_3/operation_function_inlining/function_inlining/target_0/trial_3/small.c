typedef unsigned e;

struct h {
  int i;
  long j;
  int k;
};

e fn2() {
  struct h p;

  // Inlined code of fn1
  p.k;
w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
