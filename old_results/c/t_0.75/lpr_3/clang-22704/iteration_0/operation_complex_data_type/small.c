int f;
char fn1() {
  int h = 6;
  if (f)
    goto i;
  fn1();
  return 0;
i:
  f = h;
  fn1();
  return 0;
}
int main() {}
