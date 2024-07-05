
struct h {
  long i;
  long k;
};

static struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    p = p;
  }
}

int main() {
  struct h p;
  p.k = 10;
  fn2();
  return 0;
}
