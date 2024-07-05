
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  for (int i = 0; i < 3; i++) {
    p.k;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (int i = 0; i < 3; i++) {
    struct h r;
    p = r = p;
  }
}

int main() {
}
