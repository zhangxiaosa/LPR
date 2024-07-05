
int d;
int e;

int fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  int j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  fn1();
}
