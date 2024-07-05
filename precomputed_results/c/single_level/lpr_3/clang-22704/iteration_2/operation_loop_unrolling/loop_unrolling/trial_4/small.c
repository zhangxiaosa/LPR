int d;
int e;

char fn1() {
  if (e)
    goto i;

  // First iteration
  if (e)
    goto i;

  // Second iteration
  if (e)
    goto i;

  // Third iteration
  if (e)
    goto i;

  return 0xEEACFBBFL;
i:
  d = 6L;

  // First iteration
  if (e)
    goto i;

  // Second iteration
  if (e)
    goto i;

  // Third iteration
  if (e)
    goto i;

  return 0xEEACFBBFL;
}

int main() {}