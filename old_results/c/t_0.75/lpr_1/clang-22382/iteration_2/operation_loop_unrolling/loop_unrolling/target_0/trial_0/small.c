struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  p5.k;
  w:
  goto w;
}

int main() {
  return 0;
}