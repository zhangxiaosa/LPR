int f;

int fn1() {
  if (f)
    goto i;
  fn1();
  return j;

i:
  f = 6;
  fn1();
  return j;
}

int main() {}
