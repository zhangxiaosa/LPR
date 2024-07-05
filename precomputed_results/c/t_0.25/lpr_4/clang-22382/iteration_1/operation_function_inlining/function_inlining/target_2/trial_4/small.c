struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(unsigned, short, unsigned, struct h);
static struct h fn1(unsigned p1, short p3, unsigned p5, struct h p6) {
  p6.k;
w:;
  goto w;
}
int main() {}