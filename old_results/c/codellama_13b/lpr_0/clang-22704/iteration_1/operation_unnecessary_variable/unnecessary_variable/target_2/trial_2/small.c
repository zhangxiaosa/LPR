
int fn1() {
  int f_e = 6;
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBF;

i:
  return 0xEEACFBBF;
}
