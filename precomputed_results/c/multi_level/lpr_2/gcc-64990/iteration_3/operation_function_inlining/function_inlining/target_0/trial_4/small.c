unsigned m[9][2][3];

unsigned fn1(p1) {
  fn2(0) || (m[1][0][1] = p1);
  return 2;
}

unsigned fn3() {
  fn1(0);
  return 0;
}

int main() {
  fn3();
}