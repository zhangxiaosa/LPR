struct h {
  int i;
  long h;
  int k;
} static fn1(struct h p5) {
  p5.i;
w:
  goto w;
}
void p() {
  struct h h;
  fn1(h);
  for (;;) {
    struct h r;
    h = r = h;
  }
}
int main() {}
