int f;

int fn1() {
  if (f) {
    // Unrolling iteration 1
    fn1();
    f = 6;
    fn1();
    f = 6;
    // Unrolling iteration 2
    fn1();
    f = 6;
    fn1();
    f = 6;
    // Unrolling iteration 3
    fn1();
    f = 6;
    fn1();
    f = 6;
    // Unrolling iteration 4
    fn1();
    f = 6;
    fn1();
  }
  return 0;
}

int main() {}
