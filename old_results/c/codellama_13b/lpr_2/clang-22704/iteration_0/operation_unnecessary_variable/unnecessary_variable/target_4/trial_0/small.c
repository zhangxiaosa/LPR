
long fn1() {
  if (d)
    goto i;
  fn1();
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
