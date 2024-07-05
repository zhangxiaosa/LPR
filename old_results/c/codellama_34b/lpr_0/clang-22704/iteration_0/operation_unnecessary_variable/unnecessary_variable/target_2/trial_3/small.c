
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
  return;
i:
  d = 6L;
  fn1();
  return;
}
int main() {}
