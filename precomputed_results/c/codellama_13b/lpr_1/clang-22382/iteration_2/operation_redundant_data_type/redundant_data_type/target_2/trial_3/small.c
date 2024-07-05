
struct h {
  short i;
  short j;
  int k;
};

static struct h fn1(short p1, short p2, int p3, struct h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(p1) {
  struct h p;
  short q;
  fn1(q, 0, p1, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
