
int d_int_value;
int d_int_ptr = 6L;

int fn1() {
  if (d_int_value)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  return 0xEEACFBBFL;
}

int main() {}
