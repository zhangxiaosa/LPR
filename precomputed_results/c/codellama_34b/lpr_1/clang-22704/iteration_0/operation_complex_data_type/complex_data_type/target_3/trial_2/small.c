
int h_high = 6L;
int h_low = 0;

b fn1() {
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h_high;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
