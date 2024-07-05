
struct h {
  int i;
  long j;
  int k;
};

int fn1(int p1, short p2, int p3, int p4, int i, long j, int k) {
  i = p1;
  j = p2;
  k = p3;
  goto w;
}

int fn2(int p1) {
  int q;
  int i;
  long j;
  int k;
  struct h p;
  p.i = i;
  p.j = j;
  p.k = k;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
