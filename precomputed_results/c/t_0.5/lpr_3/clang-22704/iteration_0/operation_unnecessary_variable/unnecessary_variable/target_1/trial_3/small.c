int f;

int fn1() {
  if (f)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f = 6L;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
