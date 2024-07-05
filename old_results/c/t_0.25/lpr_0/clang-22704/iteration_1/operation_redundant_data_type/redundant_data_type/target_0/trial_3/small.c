int f;
int fn1() {
  if (f)
    fn1();
  f = 6L;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
