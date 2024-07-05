int f_e;
char fn1() {
  int h = 6L;
  if (f_e)
    goto i;
  fn1();
  char j;
  return j;
i:
  fn1();
  j = 0xEEACFBBF;
  return j;
}
int main() {}
