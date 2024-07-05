struct h {
  int i;
  long j;
  int k;
};

int fn1_k(struct h p5);

unsigned fn2() {
  struct h p;
  fn1_k(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int fn1_k(struct h p5) {
  p5.k;
w:
  goto w;
}

int main() {}
