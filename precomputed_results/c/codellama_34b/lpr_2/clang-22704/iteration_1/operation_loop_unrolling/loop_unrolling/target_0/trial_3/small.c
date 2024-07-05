
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  fn1();
  return 0xEEACFBBFL;
}
