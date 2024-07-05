
int d;
int e;

int fn1_return_type;
void fn1_parameter_list;

int (*fn1)(void) = &fn1_return_type, &fn1_parameter_list;

int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = 0xEEACFBBFL;
  fn1();
  return 0xEEACFBBFL;
}

int main() {
  // Use the optimized fn1 function pointer
  fn1();
  return 0;
}
