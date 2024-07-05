
struct {
  signed int i;
  long j;
  int k;
};
int l;

static struct {
  signed int i;
  long j;
  int k;
} fn1(int p1, int p2, int p3, int p4, struct p5) {
  p5.k;
w:;
  goto w;
}

int fn2(int p1) {
  struct {
    signed int i;
    long j;
    int k;
  } p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct {
      signed int i;
      long j;
      int k;
    } r;
    p = r = p;
  }
}

int main() {}
