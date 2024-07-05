
long fn1() {
  if (d)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  return 0xEEACFBBFL;
}
