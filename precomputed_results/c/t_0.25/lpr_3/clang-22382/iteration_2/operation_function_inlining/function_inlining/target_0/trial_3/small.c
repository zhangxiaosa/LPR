struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int fn2() {
  struct h p;
  // Inlined code of fn1
  int p5_k = p.k;
  // Removed the goto statement and label

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
