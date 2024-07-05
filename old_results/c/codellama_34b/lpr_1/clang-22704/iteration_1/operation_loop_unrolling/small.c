typedef char b;
int d;
int e;
b fn1(h) {
  if (e)
    goto i;
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = h;
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
