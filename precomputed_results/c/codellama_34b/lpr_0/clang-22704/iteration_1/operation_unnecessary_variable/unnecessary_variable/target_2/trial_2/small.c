
int fn1() {
  if (6L)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  return 0xEEACFBBFL;
}
int main() {}
