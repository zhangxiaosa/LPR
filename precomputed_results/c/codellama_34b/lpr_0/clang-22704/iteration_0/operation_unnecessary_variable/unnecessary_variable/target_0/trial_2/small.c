
int d;
int e;
int fn1() {
  int j;
  if (e)
    goto i;
  fn1();
  j = 0xEEACFBBFL;
  return j;
i:
  d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
