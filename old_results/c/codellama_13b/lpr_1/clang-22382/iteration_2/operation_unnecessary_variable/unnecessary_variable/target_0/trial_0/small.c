
static struct h fn1(int p1, int p2, int p3, struct h p4) {
  p4.k;
w:;
  goto w;
}
int fn2(p1) {
  struct h r;
  fn1(0, p1, p1, r);
  while (1)
    r = r;
}
int main() {}
