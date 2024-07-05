
int fn1() {
  e = 5;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  fn1();
  return 0;
}
