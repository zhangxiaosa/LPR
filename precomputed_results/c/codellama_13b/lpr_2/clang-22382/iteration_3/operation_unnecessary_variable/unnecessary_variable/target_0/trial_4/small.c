
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  p.k;

  while (1) {
    struct h r;
    p = r = p;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
}

int main() {}
