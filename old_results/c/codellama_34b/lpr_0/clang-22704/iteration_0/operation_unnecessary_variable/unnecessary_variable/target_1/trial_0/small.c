
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  int j;
  return j;
i:
  d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
