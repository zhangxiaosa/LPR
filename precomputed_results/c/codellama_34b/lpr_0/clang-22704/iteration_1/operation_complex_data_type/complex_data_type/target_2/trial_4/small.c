
int d_int;
int e_int;
int fn1(int d_int, int e_int) {
  if (e_int)
    goto i;
  fn1(d_int, e_int);
  return 0xEEACFBBFL;
i:
  d_int = 6L;
  fn1(d_int, e_int);
  return 0xEEACFBBFL;
}
int main() {}
