char fn1() {
  if (6L)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  fn1();
  return 0xEEACFBBFL;
}
int main() {}