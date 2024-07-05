
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p4) {
  while (1)
    p4 = p4;

  return p4;
}

int fn2() {
  struct h p;
  struct h r;
  p = fn1(p);
  while (1)
    p = r = p;
}

int main() {}
