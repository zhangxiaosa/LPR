
struct h {
  int i;
  long j;
  int k;
};

unsigned l;

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  int p5_k;
  long p5_j;
  int p5_i;

  p5_k = p5.k;
w:;
  goto w;
}

int fn2(unsigned p1) {
  int q;
  struct h p;
  struct h r;

  fn1(q, l, p1, 3, p);

  while (1) {
    p = r = p;
  }
}

int main() {}
