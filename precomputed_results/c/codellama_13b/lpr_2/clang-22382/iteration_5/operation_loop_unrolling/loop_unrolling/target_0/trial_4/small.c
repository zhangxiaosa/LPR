
static struct h fn1(struct h p) {
  int i;
  long j;
  int k;
  for(i = 0; i < 1000; i++) {
    p.k;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for(int i = 0; i < 1000; i++) {
    struct h r;
    p = r = p;
  }
}

int main() {}
