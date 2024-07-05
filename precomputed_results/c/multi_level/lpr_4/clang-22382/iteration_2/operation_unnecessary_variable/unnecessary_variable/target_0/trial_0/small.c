struct h {
  int i;
  long j;
  int k;
};

static void fn1(struct h p5) {
  while (1) {
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
  }
}

int main() {
}
