int f;

int fn1() {
  f = 6;
  f = 6;
  f = 6;
  f = 6;
  f = 6;

  f = 6;
  f = 6;
  f = 6;
  f = 6;
  f = 6;

  fn1();

  int j = 0xEEACFBBF;
  return j;
}

int main() {
  fn1();
}