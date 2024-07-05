
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  p.k;
w:;
  goto w;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r;
    r.i = p.i;
    r.j = p.j;
    r.k = p.k;
  }
}

int main() {}
