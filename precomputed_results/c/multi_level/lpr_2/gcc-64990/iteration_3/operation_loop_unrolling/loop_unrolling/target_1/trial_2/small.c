unsigned fn3() {
  fn1(fn2(0));
  return 0;
}

int main() {
  fn3();
}