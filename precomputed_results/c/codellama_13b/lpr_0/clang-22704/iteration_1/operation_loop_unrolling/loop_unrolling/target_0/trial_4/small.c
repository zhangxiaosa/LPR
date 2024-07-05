
int f_d;
int f_e;
int fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f_d = 6;
  fn1();
  return 0xEEACFBBF;
}
int main() {
  while (f_e) {
    f_d = 6;
    fn1();
  }
  return 0xEEACFBBF;
}
