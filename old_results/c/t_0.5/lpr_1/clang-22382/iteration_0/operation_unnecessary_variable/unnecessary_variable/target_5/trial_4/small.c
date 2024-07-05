struct h {
  int i;
  long j;
  int k;
};

unsigned l;
static struct h fn1(unsigned, struct h);
unsigned fn2() {
  struct h p;
  int q;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(unsigned p1, struct h p5) {
  p5.k;
  goto w;
}
int main() {}
