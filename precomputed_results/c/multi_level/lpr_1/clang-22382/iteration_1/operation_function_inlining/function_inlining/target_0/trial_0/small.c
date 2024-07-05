struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  
  // Inlined code from fn1
w:
  p.k;
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
