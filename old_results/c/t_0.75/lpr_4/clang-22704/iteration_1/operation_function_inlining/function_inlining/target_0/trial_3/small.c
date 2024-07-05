struct {
  int d;
  int e;
} f;

char fn1() {
  if (f.e) {
    f.d = 6;
    fn1();
    return 537164773;
  } else {
    fn1();
    return 537164773;
  }
}