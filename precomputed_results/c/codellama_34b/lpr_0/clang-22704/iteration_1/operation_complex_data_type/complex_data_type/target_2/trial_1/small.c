
int d_int;
int e_int;

int fn1() {
  if (e_int)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d_int = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
