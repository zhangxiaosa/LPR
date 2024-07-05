
long fn1() {
  if (d)
    goto i;
  fn1();
  fn1();
  long j;
  return j;
i:
  d = 6L;
  fn1();
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
