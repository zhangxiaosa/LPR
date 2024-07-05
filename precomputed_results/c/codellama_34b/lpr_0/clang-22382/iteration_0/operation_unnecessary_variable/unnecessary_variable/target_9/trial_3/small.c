
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  while (p5.j) {
    p5.j--;
  }
  return p5;
}

unsigned fn2() {
  struct h p;
  p = fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}
