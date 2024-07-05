int f_e;
char fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0;
i:
  fn1();
  return 0;
}
int main() {}
