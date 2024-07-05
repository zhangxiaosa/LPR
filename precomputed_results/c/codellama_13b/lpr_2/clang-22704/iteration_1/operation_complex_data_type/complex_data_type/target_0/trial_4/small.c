
long fn1() {
  if (d) {
    goto i;
  }
  fn1();
  long j;
  return j;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  long d;
  long j;
  d = 0;
  j = fn1();
  return 0;
}
