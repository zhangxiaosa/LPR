char fn1() {
  if (f)
    goto i;
  fn1();
  return 0;
i:
  f = f;
  fn1();
  return 0;
}
int main() {}
