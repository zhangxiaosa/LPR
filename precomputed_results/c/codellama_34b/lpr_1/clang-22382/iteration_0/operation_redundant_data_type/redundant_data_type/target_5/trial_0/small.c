
struct h {
  signed i;
  long j;
  unsigned k;
};
long l;
static struct h fn1(long p1, short p2, long p3, long p4, struct h p5) {
  p5.k;
}
long fn2(long p1) {
  struct h p;
  fn1(l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
