
struct h {
  int i;
  long j;
};

static struct h fn1(struct h p) {
  while (1)
    p.j;
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
