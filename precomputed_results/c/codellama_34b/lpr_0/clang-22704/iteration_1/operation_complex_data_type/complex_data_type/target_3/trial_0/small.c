
int d_int = 6;
int e_int = 0xEEACFBBF;

int fn1() {
  if (e_int)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d_int = 6;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
