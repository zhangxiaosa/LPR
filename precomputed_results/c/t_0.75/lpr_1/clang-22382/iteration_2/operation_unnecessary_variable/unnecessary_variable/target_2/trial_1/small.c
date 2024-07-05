struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  goto w;
w:
  goto w;
}

unsigned fn2() {
  struct H p;
  for (;;) {
    struct H r;
    p = r = p;
  }
}

int main() {}
