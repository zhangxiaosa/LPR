int f;
int fn1() {
  if (f) {
    if (f) {
      if (f) {
        if (f) {
          // ... continue unrolling the loop if needed
        }
      }
    }
  }
  else {
    f = 6;
    fn1();
  }
  return 0;
}
int main() {}
