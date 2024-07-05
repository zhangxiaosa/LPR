int f;

int fn1() {
  if (f)
    goto i;
  return 0xEEACFBBFL;
i:
  f = 6L;
  return 0xEEACFBBFL;
}

int main() {}