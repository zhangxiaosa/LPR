
int f_d;
int f_e;
int fn1() {
  if (f_e)
    f_d = 6;
  fn1();
  int j = 0xEEACFBBF;
  return j;
}
int main() {}
