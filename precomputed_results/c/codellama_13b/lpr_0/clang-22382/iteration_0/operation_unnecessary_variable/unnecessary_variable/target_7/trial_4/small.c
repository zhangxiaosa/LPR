
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1() {
  goto w;
}

unsigned fn2() {
  fn1(0, 3);
  for (;;) {
    ;
  }
}

int main() {}
