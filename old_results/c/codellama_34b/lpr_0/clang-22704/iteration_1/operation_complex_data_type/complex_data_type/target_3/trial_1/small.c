
int d_int;
int e_int;

int fn1() {
  int i;
  if (e_int)
    i = 1;
  else
    i = 0;
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
