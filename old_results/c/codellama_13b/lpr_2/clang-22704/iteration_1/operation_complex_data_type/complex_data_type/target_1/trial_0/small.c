
int main() {
  long j;
  fn1(j);
}

long fn1(long j) {
  if (d)
    goto i;
  fn1(j);

i:
  d = 6L;
  fn1(j);
  return 0xEEACFBBFL;
}
