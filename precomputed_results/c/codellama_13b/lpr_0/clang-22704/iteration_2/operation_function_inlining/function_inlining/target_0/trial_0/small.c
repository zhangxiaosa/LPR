
int f_e;

int fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f_e = 6;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  int result;

  if (f_e)
    goto i;
  result = fn1();
  return result;
i:
  f_e = 6;
  result = fn1();
  return result;
}
