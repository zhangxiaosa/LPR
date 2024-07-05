char fn1() {
  char h = 6L;
  if (h)
    goto i;
  fn1();
  char j;
  return j;
i:
  h = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
