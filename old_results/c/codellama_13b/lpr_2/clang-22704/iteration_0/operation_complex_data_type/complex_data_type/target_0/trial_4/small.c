
long e;
long d1;
long d2;

long fn1() {
  if (e)
    goto i;
  fn1();
  long j;
  return j;
i:
  d1 = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  d2 = fn1();
  printf("%ld\n", d2);
  return 0;
}
