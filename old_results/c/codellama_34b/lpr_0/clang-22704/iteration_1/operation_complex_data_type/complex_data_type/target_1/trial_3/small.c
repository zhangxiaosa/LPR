

int e;
int d;
int fn1() {
  int e_copy = e;
  if (e_copy)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}
