
int f_e;
int i;

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
  // No pointers in the program
}
