struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p5) {
  return p5;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    // Infinite loop
  }
}

int main() {
  return 0;
}