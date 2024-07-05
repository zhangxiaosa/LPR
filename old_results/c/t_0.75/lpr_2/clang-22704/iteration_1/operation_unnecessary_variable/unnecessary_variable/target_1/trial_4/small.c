int f_d;
int f_e;
char fn1() {
  if (0) goto i;
  fn1();
  return 0xEEACFBBF;
i:
  f_d = 6L;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
