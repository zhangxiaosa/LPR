
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  p.k;
w:;
  goto w;
}

unsigned fn2() {
  struct h;
  fn1(struct h);
  while (1) {
    struct h r;
    r = r;
  }
}

int main() {}
