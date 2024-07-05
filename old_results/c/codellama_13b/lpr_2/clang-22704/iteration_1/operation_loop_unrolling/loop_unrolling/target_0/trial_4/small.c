
long fn1() {
  if (d)
    goto i;
  fn1();
  long j;
  return j;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  long x;
  for (long i = 0; i < 10; i++) {
    x = fn1();
  }
  return x;
}
