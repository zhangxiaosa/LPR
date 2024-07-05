struct h {
  short i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  int q;

  // Inlined content of fn1
  p.k;
  w:;
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
