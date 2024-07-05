
struct h {
  long i;
  int j;
  long k;
};
static struct h fn1(struct h p) {
  while (1)
    p.k;
}
unsigned fn2() {
  while (1) {
    struct h r;
    r = r;
  }
}
int main() {}
