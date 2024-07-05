char fn1() {
  if (1)
    goto i;
  fn1();
  return 0;
i:
  fn1();
  return 0;
}
int main() {}