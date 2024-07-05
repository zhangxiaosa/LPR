
struct s {
  long i;
  long j;
  long k;
};
static struct s fn1() {
  struct s p5;
  p5.k;
w:;
  goto w;
}
long fn2() {
  struct s r;
  fn1(r);
  for (;;) {
    struct s q = r;
    r = q;
  }
}
int main() {}
