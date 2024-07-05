
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  goto w;
}

int fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
}

int main() {}
