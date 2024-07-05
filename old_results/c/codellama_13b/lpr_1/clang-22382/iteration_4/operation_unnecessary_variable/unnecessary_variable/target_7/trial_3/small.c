
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
  fn1();
  while (1)
    p;
}

int main() {
  // No optimizations made
}
