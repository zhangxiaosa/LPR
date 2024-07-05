
int fn1() {
  if (6)
    goto i;
  fn1();
  return 0xEEACFBBF;

i:
  // f_e = 6;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
