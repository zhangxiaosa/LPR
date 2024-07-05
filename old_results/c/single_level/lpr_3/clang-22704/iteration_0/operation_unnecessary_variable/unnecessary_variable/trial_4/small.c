typedef char b;
int d;
int e;
b fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  return 0;
i:
  d = h;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}