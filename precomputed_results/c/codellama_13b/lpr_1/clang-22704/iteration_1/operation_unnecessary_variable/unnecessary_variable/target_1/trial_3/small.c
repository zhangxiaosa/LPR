
int e = 5;
int fn1() {
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBF;
i:
  return 0xEEACFBBF;
}
int main() {}
