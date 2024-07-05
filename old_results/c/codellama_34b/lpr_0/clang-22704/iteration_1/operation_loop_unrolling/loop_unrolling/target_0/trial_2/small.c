
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {
  for (int i = 0; i < 10; i++) {
    if (e)
      goto i;
    fn1();
    return 0xEEACFBBFL;
  }
}
