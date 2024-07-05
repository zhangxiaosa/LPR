
int fn1() {
  if (d)
    goto i;
  fn1();
  int j;
  return j;
i:
  d = 6;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
