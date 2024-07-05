struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  int p5_i = p.i;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
