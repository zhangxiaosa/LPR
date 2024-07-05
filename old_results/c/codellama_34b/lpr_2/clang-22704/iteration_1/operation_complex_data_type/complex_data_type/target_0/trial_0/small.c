
int d;
int e;

int fn1() {
  int e_flag = e;
  if (e_flag) {
    goto i;
  }
  fn1();
  return 0xEEACFBBFL;
i:
  int d_value = 0xEEACFBBFL;
  fn1();
  return d_value;
}

int main() {}
