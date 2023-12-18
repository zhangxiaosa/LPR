int f_d;
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
  char j = 0xEEACFBBFL;
  return j;
}
int main() {}
