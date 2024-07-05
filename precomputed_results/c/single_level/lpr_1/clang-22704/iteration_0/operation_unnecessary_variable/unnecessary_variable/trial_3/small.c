int d;
int e;
char fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  return 0xEEACFBBFL;
i:
  d = h;
  fn1();
  return 0xEEACFBBFL;
}
int main() {}