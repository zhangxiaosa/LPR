
int d;
int e;
int fn1(int *h) {
  if (e == 0)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = *h;
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
