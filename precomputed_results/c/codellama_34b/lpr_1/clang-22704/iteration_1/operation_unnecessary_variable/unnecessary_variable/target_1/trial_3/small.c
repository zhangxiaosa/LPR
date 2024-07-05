
int d;
int fn1(int *h) {
  if (0)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = *h;
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
