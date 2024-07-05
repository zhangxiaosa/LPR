
int d;
int fn1() {
  if (true)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
