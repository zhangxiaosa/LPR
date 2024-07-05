
long fn1() {
  if (long d)
    goto i;
  long j;
  fn1();
  return j;
i:
  d = 6L;
  long k = 0xEEACFBBFL;
  fn1();
  return k;
}
