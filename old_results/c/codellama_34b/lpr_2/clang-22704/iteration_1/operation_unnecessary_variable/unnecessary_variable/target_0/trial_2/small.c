
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  return 0xEEACFBBFL;
}

int main() {}
