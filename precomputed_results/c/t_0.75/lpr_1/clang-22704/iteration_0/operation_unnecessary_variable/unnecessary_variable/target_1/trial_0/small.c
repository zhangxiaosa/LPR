int f_d;
int f_e;
char fn1() {
  int h = 6L;
  if (0)  // Replaced f_e with its value 0
    goto i;
  fn1();
  char j;
  return j;
i:
  f_d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
