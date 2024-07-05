
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  p4.k;
  goto w;
}

int fn2(int p1) {
  long i;
  long j;
  long k;
  fn1(0, p1, p1, i, j, k);
  while (1) {
    i = j = k = i;
  }
}

int main() {}
