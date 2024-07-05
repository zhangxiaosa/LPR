char fn1() {
  if (e)
    goto i;
  fn1();
  char b;
  return b;

i:
  d = 6L;
  fn1();
  b = 0xEEACFBBFL;
  return b;
}

int main() {}
