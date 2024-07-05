
int d_int;
int e_int;

int fn1() {
  if (e_int)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  d_int = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
