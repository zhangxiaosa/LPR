
int fn1() {
  int h = 6L; // h is an integer
  if (e) {
    goto i;
  }
  fn1(); // fn1 is a function call
  int j = 0xEEACFBBFL; // j is an integer
  return j;
i:
  d = h; // d is an integer
  fn1(); // fn1 is a function call
  return j;
}
