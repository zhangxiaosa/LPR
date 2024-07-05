int d;
long fn1() {
  int h = 6L;
  if (0) // The value of e is propagated as a constant (0).
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = h;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
