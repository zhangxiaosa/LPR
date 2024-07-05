
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  return p;
}

unsigned fn2() {
  struct h r = fn1(r);
  for (int i = 0; i < 1; i++) {
    r = fn1(r);
  }
  return r;
}

int main() {}
