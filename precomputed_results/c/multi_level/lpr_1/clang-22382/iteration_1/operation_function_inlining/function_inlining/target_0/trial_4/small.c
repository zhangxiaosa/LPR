struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;

  // Inlined function definition of fn1
  {
    p.k;
  w:
    goto w;
  }

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
