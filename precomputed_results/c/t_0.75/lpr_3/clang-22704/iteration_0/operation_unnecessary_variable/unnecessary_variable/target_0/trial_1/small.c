char fn1() {
  int h = 6;
  if (0)
    goto i;
  fn1();
  return 0;
i:
  fn1();
  return 0;
}

int main() {}
