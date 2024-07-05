
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4) {
  goto w;
}

int fn2(p1) {
  int q;
  fn1(q, 0, p1, 3);
  while(1) {
    struct h r;
  }
}

int main() {}
