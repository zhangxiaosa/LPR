
int e;
int fn1() {
  for (int i = 0; i < 2; i++) {
    if (i == 0) {
      if (e) {
        i = 1;
      }
    } else {
      e = 5;
    }
    fn1();
  }
  return 0xEEACFBBF;
}
int main() {}
