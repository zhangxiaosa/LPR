
static struct h fn1(struct h p4) {
  return p4;
}
int fn2() {
  struct h p;
  struct h r;
  p = fn1(p);
  return p;
}
int main() {}
