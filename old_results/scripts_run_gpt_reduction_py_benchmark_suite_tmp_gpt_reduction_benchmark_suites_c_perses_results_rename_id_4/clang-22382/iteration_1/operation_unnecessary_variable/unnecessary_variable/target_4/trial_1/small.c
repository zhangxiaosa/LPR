struct h {
  int i;
  long j;
  int k;
};

static void fn1() {
  ;
  while (1) {
  }
}

unsigned fn2() {
  struct h p;
  int q;
  fn1();
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}.