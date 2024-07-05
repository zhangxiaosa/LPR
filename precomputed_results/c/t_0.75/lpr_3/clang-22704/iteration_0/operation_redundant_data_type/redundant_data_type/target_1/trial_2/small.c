char fn1() {
  int h = 6L;
  if (f_d)
    goto i;
  fn1();
  char j;
  return j;
i:
  f_d = h;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}