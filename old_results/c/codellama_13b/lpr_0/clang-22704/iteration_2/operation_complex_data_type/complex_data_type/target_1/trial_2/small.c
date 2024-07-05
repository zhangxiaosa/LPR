
int f_e;
int f_e_1;
int f_e_2;

int fn1() {
  if (f_e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f_e_1 = 6;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
