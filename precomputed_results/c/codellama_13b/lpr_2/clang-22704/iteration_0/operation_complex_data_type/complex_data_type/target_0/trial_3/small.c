
long e;
long fn1() {
  long j;
  if (e)
    goto i;
  fn1();
  j = 0;
  return j;
i:
  long d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
