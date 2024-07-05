int f_d;

char fn1() {
  fn1();
  return 0xEEACFBBF;

i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
