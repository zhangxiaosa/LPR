
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e = 5;
  fn1();
  return 0xEEACFBBF;
}
int main() {
  int e;
  for (int n = 0; n < 5; n++) {
    fn1();
  }
}
