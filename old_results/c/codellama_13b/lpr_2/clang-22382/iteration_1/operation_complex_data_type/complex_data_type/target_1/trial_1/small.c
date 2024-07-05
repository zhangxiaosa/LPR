
struct h {
  int i;
  long j;
  int k;
};

struct h_prime {
  int i;
  int j;
  int k;
};

unsigned l;

struct h_prime fn1(unsigned p1, int p2, unsigned p3, unsigned p4,
                    struct h_prime p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct h_prime p;
  fn1(3, l, p1, 3, p);
  for (;;) {
    struct h_prime r;
    p = r = p;
  }
}

int main() {}
