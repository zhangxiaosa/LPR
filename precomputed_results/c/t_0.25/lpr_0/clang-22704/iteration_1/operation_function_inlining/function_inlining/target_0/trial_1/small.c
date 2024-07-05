int f;

int main() {
  if (f)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  f = 6L;
  fn1();
  return 0xEEACFBBFL;
}