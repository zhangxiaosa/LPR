struct h {
  int i;
  long j;
  int k;
};

unsigned l;

static struct h fn1(struct h p5) {
  // Unused variable p5
  int p5_i = p5.i;
  w:
    goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
