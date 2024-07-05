
struct h {
  long i;
  int j;
  long k;
};

static struct h fn1(struct h p) {
  while (1) {}
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r;
  }
}

int main() {}
