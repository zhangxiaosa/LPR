struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  struct h p5;

  p5.k;
w:
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
