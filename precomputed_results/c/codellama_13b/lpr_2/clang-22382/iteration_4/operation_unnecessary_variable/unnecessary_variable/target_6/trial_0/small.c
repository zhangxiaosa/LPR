
static struct h fn1(struct h p) {
  while (1)
    p.k;
}
unsigned fn2() {
  while (1) {
    struct h p;
    fn1(p);
    p = p;
  }
}
int main() {}
