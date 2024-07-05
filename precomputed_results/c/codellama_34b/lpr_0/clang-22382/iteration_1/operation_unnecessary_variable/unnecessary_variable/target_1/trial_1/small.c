
struct h {
  int i;
  int k;
};
static struct h fn1(struct h p5) {
  for (;;)
    ;
}
unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    p = p;
  }
}
int main() {}
