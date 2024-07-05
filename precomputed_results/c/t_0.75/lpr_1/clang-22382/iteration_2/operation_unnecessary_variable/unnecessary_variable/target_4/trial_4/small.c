struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  // No code left in fn1 after optimization
}

unsigned fn2() {
  struct H p;
  // No code left in fn2 after optimization
}

int main() {}
