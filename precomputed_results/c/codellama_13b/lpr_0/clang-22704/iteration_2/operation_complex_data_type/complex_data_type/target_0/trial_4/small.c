
int f_e_low;
int f_e_high;

int fn1() {
  if (f_e_low)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f_e_low = 6;
  fn1();
  return 0xEEACFBBF;
}

int main() {
  f_e_low = 0;
  f_e_high = 0;
  fn1();
  return 0;
}
