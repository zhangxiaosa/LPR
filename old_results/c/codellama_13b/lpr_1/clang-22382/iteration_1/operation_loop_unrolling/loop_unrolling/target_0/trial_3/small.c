
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  struct h r0;
  struct h r1;
  struct h r2;
  struct h r3;
  struct h r4;
  struct h r5;
  struct h r6;
  struct h r7;
  struct h r8;
  struct h r9;
  struct h r10;
  p = r0 = p;
  p = r1 = p;
  p = r2 = p;
  p = r3 = p;
  p = r4 = p;
  p = r5 = p;
  p = r6 = p;
  p = r7 = p;
  p = r8 = p;
  p = r9 = p;
  p = r10 = p;
}

int main() {}
