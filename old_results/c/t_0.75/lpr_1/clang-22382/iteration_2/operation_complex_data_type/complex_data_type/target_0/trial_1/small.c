struct H {
  short i;
};

static void fn1(struct H p5) {
  // Removed unused member "k"
  // Removed infinite loop
}

unsigned fn2() {
  struct H p;
  fn1(p);
  // Removed infinite loop
}

int main() {
  return 0;
}