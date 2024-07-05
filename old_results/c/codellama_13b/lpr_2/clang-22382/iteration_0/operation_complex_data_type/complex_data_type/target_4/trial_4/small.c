
struct h_decomposed {
  int i;
  long j;
  int k;
};

struct h_decomposed fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h_decomposed p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct h_decomposed p;
  int q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h_decomposed r;
    p = r = p;
  }
}

int main() {}
