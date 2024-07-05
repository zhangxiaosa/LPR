int d;

char fn1() {
  if (0)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}