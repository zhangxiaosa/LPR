char fn1() {
  if (6L)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  6L = 6L;
  fn1();
  return 0xEEACFBBF;
}
int main() {}