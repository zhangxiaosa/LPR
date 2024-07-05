
struct h {
  signed int i;
  long j;
  unsigned int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:;
  goto w;
}

long fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
