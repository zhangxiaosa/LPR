
int d;
int e;

void fn1() {
  int e_val = e;
  if (e_val) {
    goto i;
  }
  fn1();
  return 0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
