
long e;
long fn1() {
  if (e)
    goto i;
  fn1();
  long j;
  return j;
i:
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
