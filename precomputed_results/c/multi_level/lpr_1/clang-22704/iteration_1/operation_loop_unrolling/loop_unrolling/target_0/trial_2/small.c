int fn1() {
  if (f) {
    f = 6;
    fn1();
    int j1 = 0xEEACFBBF;
    int j2 = 0xEEACFBBF;
    int j3 = 0xEEACFBBF;
    int j4 = 0xEEACFBBF;
    int j5 = 0xEEACFBBF;
    int j6 = 0xEEACFBBF;
    return j1 + j2 + j3 + j4 + j5 + j6;
  }
  fn1();
  int j;
  return j;
}