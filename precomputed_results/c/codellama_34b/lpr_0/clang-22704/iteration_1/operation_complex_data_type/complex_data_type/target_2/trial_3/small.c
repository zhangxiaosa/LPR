
int d;
int e;
int fn;

int fn1() {
  if (e)
    goto i;
  fn = fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn = fn1();
  return 0xEEACFBBFL;
}
