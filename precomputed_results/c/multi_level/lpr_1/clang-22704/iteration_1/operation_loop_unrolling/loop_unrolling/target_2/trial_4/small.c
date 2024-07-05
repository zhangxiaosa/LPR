int f;

int fn1() {
  if (f) {
    f = 6;
    f = 6;
    f = 6;
    f = 6;
    return fn1();
  }
  return 0;
}
