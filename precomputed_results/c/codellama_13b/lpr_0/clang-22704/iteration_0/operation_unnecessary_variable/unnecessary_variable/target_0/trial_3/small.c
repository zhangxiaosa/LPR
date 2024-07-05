
int f_e;
int fn1() {
  long h = 6;
  if (f_e)
    goto i;
  fn1();
i:
  h = 6;
  fn1();
}
int main() {}
