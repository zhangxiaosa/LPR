
int d;
int e;

int fn1() {
  int h = 6L;
  int h_temp = h;
  if (e)
    goto i;
  fn1();
  int j;
  j = h_temp;
  return j;
i:
  d = h_temp;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}
