
int i;
long j;
int k;
int l;

struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    r_i = p.i;
    r_j = p.j;
    r_k = p.k;
    p.i = r_i;
    p.j = r_j;
    p.k = r_k;
  }
}

int main() {}
