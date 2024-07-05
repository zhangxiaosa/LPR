
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int i = p5.i;
  long j = p5.j;
  int k = p5.k;

  for (;;) {
    j;
  }
}

unsigned fn2() {
  struct h p;
  int i = p.i;
  long j = p.j;
  int k = p.k;

  fn1(p);

  for (;;) {
    struct h r;
    i = r.i;
    j = r.j;
    k = r.k;
    p = r;
  }
}

int main() {}
