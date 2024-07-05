int d;
int e;
int h;
int fn1() {
  if (e)
    goto i;
  fn1();
  int j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
