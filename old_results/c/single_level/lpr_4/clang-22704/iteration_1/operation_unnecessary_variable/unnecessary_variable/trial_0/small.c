int d;
int e;

char fn1() {
  if (e)
    goto i;
  fn1();
  d = 6L;
  fn1();
  return (char)0xEEACFBBFL;
i:
  d = 6L;
  fn1();
  return (char)0xEEACFBBFL;
}

int main() {}
