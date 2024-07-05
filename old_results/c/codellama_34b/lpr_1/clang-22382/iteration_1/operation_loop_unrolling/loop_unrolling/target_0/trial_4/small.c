
struct h {
  signed i;
  long j;
  unsigned k;
};
static struct h fn1(struct h p5) {
  p5.k;
w:;
  goto w;
}
long fn2() {
  struct h p;
  fn1(p);
  for (i = 0; i < 4; i++) {
    struct h r;
    p = r = p;
  }
}
int main() {}
