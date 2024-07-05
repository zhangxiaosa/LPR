long f_d;
int f_e;

char fn1() {
  if (f_e)
    goto i;
  return 0;
i:
  f_d = 6L;
  return 0;
}