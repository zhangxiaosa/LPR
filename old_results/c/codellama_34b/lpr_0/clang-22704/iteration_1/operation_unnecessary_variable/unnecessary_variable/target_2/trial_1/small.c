
int fn1() {
  if (0)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  d_int = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
