
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  int i;
  long j;
  int k;
  struct h r;
  for (int i = 0; i < 1000; i++) {
    p.k;
    r = p;
    p = r;
  }
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
