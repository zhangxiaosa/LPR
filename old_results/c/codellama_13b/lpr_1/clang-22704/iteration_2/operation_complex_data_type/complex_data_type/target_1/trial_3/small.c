
int fn1() {
  if (e) {
    e = 5;
    fn1_result = fn1();
  } else {
    fn1_result = 0xEEACFBBF;
  }
  return fn1_result;
}
