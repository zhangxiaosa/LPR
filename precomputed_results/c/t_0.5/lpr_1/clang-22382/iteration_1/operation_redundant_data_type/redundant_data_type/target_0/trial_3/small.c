struct h {
  int i;
  long j;
  int k;
};
static int fn1();
unsigned fn2(p1) {
  int p_i, p_k;
  long p_j;
  int q;
  fn1(q);
  for (;;) {
    int r_i, r_k;
    long r_j;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}
int fn1(unsigned p1) {
w:;
  goto w;
}
int main() {}
