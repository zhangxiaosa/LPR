
struct {
  long i;
  long j;
  long k;
};

static struct {
  long i;
  long j;
  long k;
} fn1(int p1, int p2, int p3, struct {
  long i;
  long j;
  long k;
} p4) {
  p4.k;
w:;
  goto w;
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
