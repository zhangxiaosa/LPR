int f_d;
int f_e;
char fn1() {
  if (f_e)
    goto i;
  fn1();
  char j;
  return j;
i:
  f_d = 6L;
  fn1();
  j = 0xEEACFBBF;
  return j;
}
int main() {}
