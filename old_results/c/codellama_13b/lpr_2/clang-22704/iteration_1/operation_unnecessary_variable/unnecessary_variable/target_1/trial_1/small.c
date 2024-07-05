
long fn1() {
  if (6L)
    goto i;
  fn1();
  long j;
  return j;
i:
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
