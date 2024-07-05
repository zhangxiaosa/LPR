
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p4) {
  int i;

  for (i = 0; i < 10; i++) {
    p4 = p4;
  }

  return p4;
}

int fn2() {
  struct h p;
  struct h r;
  fn1(p);

  for (int i = 0; i < 10; i++) {
    p = r = p;
  }
}

int main() {}
