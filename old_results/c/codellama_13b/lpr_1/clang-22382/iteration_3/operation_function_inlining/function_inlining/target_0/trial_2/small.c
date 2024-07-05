
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  // Inline function fn1
  p4.k;
  goto w;
}

int fn2(p1) {
  struct h p;
  struct h r;
  // Inline function fn1
  p = r = p;
  while (1)
    p = r = p;
}

int main() {}
