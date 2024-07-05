
int d;
int e;

int fn1(int h) {
  if (e)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = h;
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int h = 5;
  int result = fn1(h);
  return result;
}
