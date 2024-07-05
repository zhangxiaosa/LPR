int f;

char fn1() {
  int h = 6;
  if (f)
    goto i;
  fn1();
  long j;
  return j;
i:
  f = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}