char fn1() {
  if (6L)
    goto i;
  fn1();
  char j;
  return j;
i:
  6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
