
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  int j = 0xEEACFBBFL;
  return j;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
