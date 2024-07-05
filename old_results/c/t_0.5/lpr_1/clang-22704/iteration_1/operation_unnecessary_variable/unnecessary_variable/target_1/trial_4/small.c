int f_d;

char fn1() {
  fn1();
  return 0xEEACFBBFL;

i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
