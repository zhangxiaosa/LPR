
int d_int;
int e_int;

goto_target:
  d_int = 6;
  fn1();
  return 0xEEACFBBFL;

int fn1() {
  if (e_int)
    goto goto_target;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
