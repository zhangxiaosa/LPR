
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2) {
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  struct h r;
  for (;;) {
    p = r = p;
  }
}

int main() {
  fn1(3, 3);
  fn2(3);
  return 0;
}
