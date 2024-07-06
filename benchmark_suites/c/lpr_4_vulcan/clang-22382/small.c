struct h {
  int i;
  long h;
  int k;
} static fn1(struct h p5) {
  p5.i;
  while (1) {
  }
}
void p() {
  struct h h;
  fn1(h);
  while (1) {
    struct h r;
    h = r = h;
  }
}
int main() {}
