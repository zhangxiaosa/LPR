
int f_d;
int f_e;
int fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  return 0xEEACFBBF;
}
int main() {}
