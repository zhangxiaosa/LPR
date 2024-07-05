
struct h {
  long j;
  int k;
};

static struct h fn1(struct h p) {
  p.k;
  goto w;
w:;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r;
  }
}

int main() {}
