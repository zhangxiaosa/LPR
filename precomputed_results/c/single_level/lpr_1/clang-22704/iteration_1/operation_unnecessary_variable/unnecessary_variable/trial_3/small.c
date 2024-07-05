int d;

long fn1() {
  int h = 6L;
  goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = h;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}