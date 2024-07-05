int f_d;
int f_e;
char fn1() {
  if (f_e)
    goto i;
  fn1();
  f_d = 6L;
  fn1();
  return (char)0xEEACFBBFL;
}
int main() {}
