int f_value;
int h_value;

char fn1() {
  h_value = 6L;
  if (f_value)
    goto i;
  fn1();
  char j;
  return j;
i:
  f_value = h_value;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {}