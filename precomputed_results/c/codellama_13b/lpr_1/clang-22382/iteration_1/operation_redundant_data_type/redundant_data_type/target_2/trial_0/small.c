
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

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  // Eliminate struct h and substitute with its associated original data type
  struct {
    int i;
    long j;
    int k;
  } p;
  int q;
  struct {
    int i;
    long j;
    int k;
  } r;
  fn1(q, 0, p1, 3, p);
  while (1) {
    r = p = p;
  }
}
