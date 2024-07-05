int f_d;
int f_e;

char fn1() {
  if (f_e)
    goto i;

  // Unrolled loop body
  fn1();
  fn1();

  return 0xEEACFBBFL;

i:
  f_d = 6L;

  // Unrolled loop body
  fn1();
  fn1();

  return 0xEEACFBBFL;
}

int main() {}
