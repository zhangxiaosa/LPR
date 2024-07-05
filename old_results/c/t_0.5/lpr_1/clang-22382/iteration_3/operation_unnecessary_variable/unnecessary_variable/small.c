struct h {
  int i;
  long j;
  int k;
};
static int fn1_k();
unsigned fn2() {
  struct h p;
  fn1_k(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int fn1_k(struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}