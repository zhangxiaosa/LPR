int f_d;
int f_e;
char fn1() {
  if (f_e)
    goto i;
  // Unroll Iteration 1
  if (f_e)
    goto i_1;
  return 0xEEACFBBFL;
i_1:
  f_d = 6L;
  if (f_e)
    goto i_2;
  return 0xEEACFBBFL;
i_2:
  f_d = 6L;
  return 0xEEACFBBFL;
i:
  f_d = 6L;
  // Unroll Iteration 2
  if (f_e)
    goto i_3;
  return 0xEEACFBBFL;
i_3:
  f_d = 6L;
  if (f_e)
    goto i_4;
  return 0xEEACFBBFL;
i_4:
  f_d = 6L;
  return 0xEEACFBBFL;
}

int main() {}
