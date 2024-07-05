c
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  int k;
w:;
  goto w;
}

int fn2(p1) {
  int i;
  long j;
  int k;
  int q;
  fn1(q, 0, p1, 3, i, j, k);
  while (1) {
    int i2;
    long j2;
    int k2;
    i2 = i;
    j2 = j;
    k2 = k;
    i = i2;
    j = j2;
    k = k2;
  }
}

int main() {}
