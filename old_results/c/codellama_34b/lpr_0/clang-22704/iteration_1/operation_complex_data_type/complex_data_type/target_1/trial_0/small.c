
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}

// Decomposed into primary data types

int e1 = e;
int fn1() {
  if (e1)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  int d1 = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
