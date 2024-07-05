int f_d;

char fn1() {
  if (f_d)
    goto i;
  fn1();
  return 0xEEACFBBF;

i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  if (f_d)
    goto i;
  fn1();
  return 0xEEACFBBF;

i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBF;
}