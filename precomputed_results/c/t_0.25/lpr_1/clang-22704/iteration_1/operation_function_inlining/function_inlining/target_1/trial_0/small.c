char fn1() {
  if (f.e)
    goto i;
  fn1();
i:
  f.d = 6L;
  fn1();
}

int main() {
  if (f.e)
    goto i;
  fn1();
i:
  f.d = 6L;
  fn1();
}