int f_d;
int f_e;

char fn1() {
  if (f_e) {
    goto i;
  }

  // Unroll iteration 1
  if (f_e) {
    goto i;
  }

  // Unroll iteration 2
  if (f_e) {
    goto i;
  }

  return 0xEEACFBBFL;

i:
  f_d = 6L;

  // Unroll iteration 1
  if (f_e) {
    goto i;
  }

  // Unroll iteration 2
  if (f_e) {
    goto i;
  }

  return 0xEEACFBBFL;
}

int main() {}
