
long fn1() {
  if (d) {
    goto i;
  }
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {
  return fn1();
}
