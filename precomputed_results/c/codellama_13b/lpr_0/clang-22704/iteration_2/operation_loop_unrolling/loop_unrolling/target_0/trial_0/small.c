
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
  for (int i = 0; i < 6; i++) {
    f_e = i;
    fn1();
  }
  return 0;
}
