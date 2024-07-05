static int fn1_k();
unsigned fn2() {
  struct h p;
  fn1_k();
  for (;;) {
    struct h r;
    r = p;
  }
}
int fn1_k(struct h p5) {
  goto w;
w:
  goto w;
}
int main() {}
