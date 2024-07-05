
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(unsigned p1, int p2, struct h p5) {
  p5.k;
}

unsigned fn2(unsigned p1) {
  int i;
  long j;
  int k;
  struct h p;
  struct h r;
  for (;;) {
    p = r = p;
  }
}

int main() {}
