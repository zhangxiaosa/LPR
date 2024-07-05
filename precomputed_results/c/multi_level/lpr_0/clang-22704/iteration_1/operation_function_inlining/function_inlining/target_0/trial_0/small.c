int f_d;
int f_e;

char fn1() {
  if (f_e)
    goto i;

  // Inline implementation of fn1
  if (f_e)
    goto i;

  // Return statement of fn1
  return 0xEEACFBBFL;

i:
  f_d = 6L;

  // Inline implementation of fn1
  if (f_e)
    goto i;

  // Return statement of fn1
  return 0xEEACFBBFL;
}

int main() {}
