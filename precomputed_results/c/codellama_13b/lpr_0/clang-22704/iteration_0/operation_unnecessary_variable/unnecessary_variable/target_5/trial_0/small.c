
int f_d;
int f_e;
int fn1() {
  if (f_e)
    goto i;
  fn1();
i:
  f_d = 6;
  fn1();
}
int main() {}
