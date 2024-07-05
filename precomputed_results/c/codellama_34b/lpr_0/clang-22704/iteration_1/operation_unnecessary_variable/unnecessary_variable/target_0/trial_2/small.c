
int e_int;
int fn1() {
  if (e_int)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
