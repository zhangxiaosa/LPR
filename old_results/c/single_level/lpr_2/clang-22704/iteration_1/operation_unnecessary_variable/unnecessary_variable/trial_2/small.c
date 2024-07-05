int f;

char fn1() {
  if (f)
    goto i;
  fn1();
  return (char)0xEEACFBBFL;
i:
  f = 6L;
  fn1();
  return (char)0xEEACFBBFL;
}

int main() {}
