
int f_d;
int f_e;
int fn1() {
  if (f_e) {
    f_d = 6;
    goto i;
  }
  fn1();
  return 0xEEACFBBF;
i:
  fn1();
  return 0xEEACFBBF;
}
int main() {}
