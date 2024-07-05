
int d;
int e;
int fn1() {
  if (e)
    goto i;
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
