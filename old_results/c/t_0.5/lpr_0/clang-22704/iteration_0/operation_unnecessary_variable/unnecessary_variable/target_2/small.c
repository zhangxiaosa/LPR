int f;
char fn1() {
  if (f)
    goto i;
  fn1();
  char j;
  return j;
i:
  f = 6L;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}