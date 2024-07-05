
int d;
int e;
int fn1(int h) {
  int d_tmp = d;
  if (e)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d_tmp = h;
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
