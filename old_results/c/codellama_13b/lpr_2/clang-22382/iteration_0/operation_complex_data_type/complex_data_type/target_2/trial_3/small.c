
struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int q;

struct h p;

struct h r;

int fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
