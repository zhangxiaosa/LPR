
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, struct h p5) {
  int k;
  long j;
  int i;
  k = p5.k;
w:;
  goto w;
}

unsigned fn2(p1) {
  struct h p;
  int k;
  long j;
  int i;
  struct h r;
  k = fn1(3, 3, p).k;
  for (;;) {
    r = p;
    p = r;
  }
}

int main() {}
