
long fn1() {
  if (6L)
    goto i;
  fn1();
i:
  return 0xEEACFBBFL;
}
int main() {}
