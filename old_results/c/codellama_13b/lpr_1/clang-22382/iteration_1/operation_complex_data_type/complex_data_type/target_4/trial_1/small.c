
struct h {
  int i;
  long j;
  int k;
};

struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
  goto w;
  w:
  while (1) {
    struct h r;
    int r_i = r->i;
    long r_j = r->j;
    int r_k = r->k;
    p = r = p;
  }
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
}

int main() {
  struct h p;
  int q;
  fn1(q, 0, 1, 3, p);
}
