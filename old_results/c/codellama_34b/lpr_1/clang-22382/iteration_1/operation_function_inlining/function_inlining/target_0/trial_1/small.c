
struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(struct h p5) {
  p5.k;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

long fn2() {
  struct h p;
  p = fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
