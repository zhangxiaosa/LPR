
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  return p;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {}
