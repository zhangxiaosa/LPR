
int e;
int fn1(int *h) {
  if (e)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  return 0xEEACFBBFL;
}
int main() {}
