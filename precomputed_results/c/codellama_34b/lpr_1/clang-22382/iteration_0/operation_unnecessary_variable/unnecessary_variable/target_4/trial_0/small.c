
struct h {
  signed i;
  long j;
  unsigned k;
};
long l;
static struct h fn1(struct h p5) {
  p5.k;
w:;
  goto w;
}
long fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
