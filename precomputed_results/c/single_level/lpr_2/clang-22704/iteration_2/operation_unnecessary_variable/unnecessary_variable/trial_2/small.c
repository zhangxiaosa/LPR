char fn1() {
  if (6)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  6 = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
