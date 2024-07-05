
struct h {
  int i;
  long j;
  int k;
};
int l;
static struct h fn1(int p1, signed p2, int p3, int p4,
                    struct h p5) {
  p5.k;
w:;
  goto w;
}
int fn2(int p1) {
  struct h p;
  signed q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r = p;
    p = r;
  }
}
int main() {}
