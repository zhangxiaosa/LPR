char fn1() {
  int h = 6L;
  if (0)
    goto i;
  fn1();
  char j = 0;
  return j;
i:
  f = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
