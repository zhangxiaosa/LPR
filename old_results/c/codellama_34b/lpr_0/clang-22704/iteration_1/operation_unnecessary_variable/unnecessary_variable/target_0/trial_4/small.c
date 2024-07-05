
int fn1() {
  if (e_int)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  return 0xEEACFBBFL;
}
int main() {}
