struct h {
  int i;
  long j;
  int k;
};

static int fn1_int(struct h p5) {
  return p5.i;
}

static long fn1_long(struct h p5) {
  return p5.j;
}

static int fn1_k(struct h p5) {
  return p5.k;
}

unsigned int fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    struct h r_copy;
    r_copy.i = r.i;
    r_copy.j = r.j;
    r_copy.k = r.k;
    p = r_copy;
  }
}

int main() {
}
