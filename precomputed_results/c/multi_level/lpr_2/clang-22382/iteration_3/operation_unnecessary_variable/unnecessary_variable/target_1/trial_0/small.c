
struct Data {
  int i;
  long j;
  unsigned k;
};

static struct Data fn1(struct Data p5) {
  // No statements after optimization
}

unsigned fn2() {
  struct Data p;
  // No statements after optimization
  for (;;) {
    struct Data r1;
    p = r1 = p;
  }
}

int main() {
  // No statements after optimization
}
