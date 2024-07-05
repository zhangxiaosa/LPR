
struct h {
  int i;
  long j;
  int k;
};

struct h *fn1(unsigned p1, int p2, struct h *p5) {
  p5->k;
  goto w;
}

unsigned *fn2(unsigned *p1) {
  struct h p;
  fn1(3, 3, &p);
  for (;;) {
    struct h *r;
    p = r = *p1;
  }
}

int main() {}
