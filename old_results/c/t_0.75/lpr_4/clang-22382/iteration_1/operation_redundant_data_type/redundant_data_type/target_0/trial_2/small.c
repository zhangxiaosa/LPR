struct {
  int i;
  long j;
  int k;
} fn1();

unsigned fn2() {
  struct {
    int i;
    long j;
    int k;
  } p;
  int q;
  fn1(q, 3, p);
  for (;;) {
    struct {
      int i;
      long j;
      int k;
    } r;
    p = r = p;
  }
}

struct {
  int i;
  long j;
  int k;
} fn1(unsigned p1, unsigned p3, struct {
  int i;
  long j;
  int k;
} p5) {
  p5.k;
  w:
  goto w;
}

int main() {}