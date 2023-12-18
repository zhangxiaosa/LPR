int f_d;
int f_e;

char fn1() {
  if (f_e)
    goto i;

  f_d = 6L;
  return 0xEEACFBBFL;

i:
  f_d = 6L;
  return 0xEEACFBBFL;
}

int main() {}
