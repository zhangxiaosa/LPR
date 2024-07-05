struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  w:
    goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  // Loop unrolled
  struct h r;
  p = r = p;
  struct h r1;
  p = r1 = p;
  struct h r2;
  p = r2 = p;
  struct h r3;
  p = r3 = p;
  // Repeat the above lines as needed
}

int main() {}
