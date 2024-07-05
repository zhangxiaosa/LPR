
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p4) {
  return p4;
}

int fn2() {
  struct h p;
  struct h r;
  fn1(p);
  return r = p;
}

int main() {}
