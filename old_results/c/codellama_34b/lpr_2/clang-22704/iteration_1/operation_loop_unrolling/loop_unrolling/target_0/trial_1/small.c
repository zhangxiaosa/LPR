
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}
int main() {
  for (int i = 0; i < 10; i += 2) {
    fn1();
    fn1();
  }
}
