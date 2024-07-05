
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1() {
  while (1)
    ;
}

int fn2() {
  struct h p;
  struct h r;
  fn1();
  while (1)
    p = r = p;
}

int main() {
  // No optimizations made
}
