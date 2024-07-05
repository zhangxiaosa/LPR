
long fn1() {
  if (6L)
    goto i;
  fn1();
  long j;
  return j;
i:
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
