struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  fn1(0, p);
  for (;;) {
    p = p;
  }
}

int main() {}
