
int fn1() {
  if (6)
    goto i;
  fn1();
  return 0xEEACFBBF;

i:
  ;
  fn1();
  return 0xEEACFBBF;
}

int main() {}
