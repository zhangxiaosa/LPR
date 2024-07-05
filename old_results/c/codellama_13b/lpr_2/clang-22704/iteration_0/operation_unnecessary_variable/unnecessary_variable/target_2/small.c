
long d;
long fn1() {
  if (d)
    goto i;
  fn1();
  long j;
  return j;
i:
  d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
