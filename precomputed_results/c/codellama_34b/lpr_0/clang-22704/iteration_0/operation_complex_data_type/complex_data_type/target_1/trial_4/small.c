
int d_f = 6L;
int e_f = 0;
int h = 6L;
int j = 0;

int fn1() {
  if (e_f)
    goto i;
  fn1();
  j = 0xEEACFBBFL;
  return j;
i:
  d_f = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  fn1();
}
