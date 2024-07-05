int f;

int fn1() {
  if (f)
    goto i;
  fn1();
  int j;
  return j;

i:
  f = 6;
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}