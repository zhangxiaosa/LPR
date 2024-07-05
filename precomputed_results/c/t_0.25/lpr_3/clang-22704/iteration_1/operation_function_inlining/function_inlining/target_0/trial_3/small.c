int f;
char fn1() {
  if (f)
    goto i;
  if (f)
    goto i;
  if (f)
    goto i;
  return 0xEEACFBBFL;
i:
  f = 6L;
  if (f)
    goto i;
  return 0xEEACFBBFL;
}

int main() {}
