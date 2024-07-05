c
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p4) {
  goto w;

w:;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  while (1) {
    p = p;
  }
}

int main() {}
