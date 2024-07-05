struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  // No code in the body of fn1, so it can be removed
}

unsigned fn2() {
  // No code in the body of fn2, so it can be removed
}

int main() {}
