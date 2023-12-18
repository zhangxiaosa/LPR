struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.i;
  while (1) {
  }
}

unsigned int fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p.i;
    p.j;
    p.k;
    r.i;
    r.j;
    r.k;
    p = r = p;
  }
}

int main() {}
