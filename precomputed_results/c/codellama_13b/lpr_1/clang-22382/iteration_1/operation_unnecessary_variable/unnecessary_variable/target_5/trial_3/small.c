
struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(int p1, int p2, int p3, struct h p5) {
  p5.k;
w:;
  goto w;
}
int fn2(p1) {
  struct h p;
  struct h r;
  p = r = p;
  while (1) {
    p = r = p;
  }
}
int main() {}
