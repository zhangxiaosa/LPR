int f_d;
int f_e;

char fn1() {
  int h = 6L;
  if (1)
    goto i;
  fn1();
  return j;
i:
  f_d = h;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
