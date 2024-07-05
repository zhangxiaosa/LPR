
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h r;
  fn1(r);
  while (1) {
    struct h r;
    r = r;
  }
}

int main() {}
