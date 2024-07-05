int f_d;
int f_e;
char fn1() {
  if (0) // Optimized: Replaced f_e with constant 0
    goto i;
  fn1();
  char j;
  return j;
i:
  f_d = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
