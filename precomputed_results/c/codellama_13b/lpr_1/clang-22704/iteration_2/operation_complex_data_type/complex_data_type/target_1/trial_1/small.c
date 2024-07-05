
int e_sign;
int e_exponent;
int e_mantissa;

int fn1() {
  if (e_sign)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  e_sign = 5;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
