
struct h {
  long i;
  long j;
  long k;
};
static struct h fn1(long p1, struct h p5) {
  p5.k = 3;
  return p5;
}
long fn2(p1) {
  struct h p;
  fn1(p1, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
