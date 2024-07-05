int fn1() {
  int h = 6L;
  if (6) goto i;
  fn1();
  return 0xEEACFBBF;
i:
  6 = h;
  fn1();
  return 0xEEACFBBF;
}

int main() {}