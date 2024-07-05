
struct h {
  int i;
  long j;
  int k;
};
unsigned l;

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}

int main() {
  struct h p;
  int q;
  unsigned r;

  p = fn1(q, l, r, 3, p);

  while (1) {
    struct h r;
    p = r = p;
  }
}
