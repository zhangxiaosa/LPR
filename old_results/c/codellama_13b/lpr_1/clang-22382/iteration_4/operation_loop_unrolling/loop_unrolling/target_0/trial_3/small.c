
struct h {
  int i;
  long j;
  char k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  p4 = p4;
  p4 = p4;
  p4 = p4;
  p4 = p4;
  return p4;
}

int fn2(p1) {
  struct h p;
  struct h r;
  p = r = fn1(0, p1, p1, p);
  p = r = fn1(0, p1, p1, p);
  p = r = fn1(0, p1, p1, p);
  p = r = fn1(0, p1, p1, p);
  return 0;
}

int main() {}
