
struct {
  long i;
  long j;
  long k;
};

static struct fn1(int p1, int p2, int p3, struct p4) {
  p4.k;
  while (1) {
    p4 = p4;
  }
}

int fn2(int p1) {
  struct {
    long i;
    long j;
    long k;
  } p;
  struct {
    long i;
    long j;
    long k;
  } r;
  fn1(0, p1, p1, p);
  while (1) {
    p = r = p;
  }
}

int main() {}
