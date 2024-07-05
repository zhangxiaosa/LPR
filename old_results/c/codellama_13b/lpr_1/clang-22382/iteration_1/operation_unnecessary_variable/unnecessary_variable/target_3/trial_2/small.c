
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p4, struct h p5) {
  p5.k;
  goto w;
}

int fn2(p1) {
  struct h p;
  while (1) {
    struct h r;
    p = r;
  }
}

int main() {}
