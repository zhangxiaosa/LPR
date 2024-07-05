
#include <iostream>

int d_int_value;
int d_int_ptr;

int fn1() {
  int local_var1;
  int local_var2;
  int local_var3;

  local_var1 = d_int_value;
  local_var2 = d_int_ptr;
  local_var3 = fn1();

  if (local_var1) {
    goto j;
  }

  local_var2 = 6L;
  fn1();
  return 0xEEACFBBFL;

j:
  local_var2 = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
