
<SYS>

// Decomposition of the program into variables with primary data types

int d_int_ptr;
int d_int_val;

int fn1() {
  if (d_int_val)
    goto j;
  fn1();
  return 0xEEACFBBFL;
j:
  d_int_val = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}

</SYS>
