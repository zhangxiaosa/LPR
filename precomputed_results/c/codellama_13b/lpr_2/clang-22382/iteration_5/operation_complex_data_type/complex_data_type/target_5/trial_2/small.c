
struct h {
  long i;
  int j;
  long k;
};

static struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    long i;
    int j;
    long k;
    p = r = p;
  }
}

int main() {}
