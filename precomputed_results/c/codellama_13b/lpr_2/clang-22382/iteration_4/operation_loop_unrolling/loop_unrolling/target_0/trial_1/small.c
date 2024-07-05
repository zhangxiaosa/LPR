
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  int i;
  long j;
  int k;

  for (i = 0; i < p.i; i++) {
    for (j = 0; j < p.j; j++) {
      for (k = 0; k < p.k; k++) {
        p.k = k;
      }
    }
  }

  return p;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
