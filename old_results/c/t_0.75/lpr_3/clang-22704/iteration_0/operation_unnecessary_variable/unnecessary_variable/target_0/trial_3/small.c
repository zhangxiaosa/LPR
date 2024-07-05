int f;
char fn1() {
  int h = 6;
  goto i;
i:
  f = h;
  fn1();
  return 0;
}
int main() {}