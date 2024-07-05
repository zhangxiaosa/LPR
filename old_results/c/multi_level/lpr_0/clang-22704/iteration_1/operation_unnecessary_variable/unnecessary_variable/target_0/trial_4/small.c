int f_e;

int fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
