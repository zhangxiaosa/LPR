
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int p2, struct h p5) {
  p5.k;
}

unsigned fn2(int p2) {
  struct h p;
  fn1(p2, p);
}

int main() {
  unsigned p1;
  fn2(3);
}
