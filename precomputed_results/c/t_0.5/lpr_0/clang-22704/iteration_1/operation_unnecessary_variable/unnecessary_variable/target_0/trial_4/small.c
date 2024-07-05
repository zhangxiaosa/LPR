char fn1() {
  if (0)
    goto i;
  fn1();
  char j;
  return j;
i:
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}