
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  p.k;
  goto w;
}

unsigned fn2() {
  struct h p;
  struct h r;
  p = r;
  while (1) {
    p = r = p;
  }
}

int main() {}
