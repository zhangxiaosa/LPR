
long fn1(long d) {
  if (d)
    goto i;
  fn1(d);
  long j;
  return j;
i:
  d = 6L;
  fn1(d);
  return 0xEEACFBBFL;
}
int main() {}
